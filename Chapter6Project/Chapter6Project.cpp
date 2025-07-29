// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void getScore(double& currentScore, double& scoreSum, double& lowestScore, double& highestScore, int judgeNum);
double calcAverage(int numJudges, double scoreSum, double lowestScore, double highestScore);
bool isHigher(double , double);
bool isLower(double , double);

int main() {
	int numJudges;

	// Initialize lowestScore high, highestScore low
	double score, lowestScore = 100.0, highestScore = -1.0, scoreSum = 0.0;  

	cout << "Enter # of judges: ";
	cin >> numJudges;

	// Validate number of judges
	if (numJudges < 3) {
		cout << "At least 3 judges are required to drop the highest and lowest scores." << endl;
		return 1;
	}

	for (int i = 1; i <= numJudges; i++) {
		getScore(score, scoreSum, lowestScore, highestScore, i);

		
		if (isLower(score, lowestScore)) {
			lowestScore = score;
		}

		if (isHigher(score, highestScore)) {
			highestScore = score;
		}
	}

	cout << "\nContestant's score: ";
	cout << calcAverage(numJudges, scoreSum, highestScore, lowestScore);

	cout << endl;

	return 0;
}

// Function definition
void getScore(double& currentScore, double& scoreSum, double& lowestScore, double& highestScore, int judgeNum) {

	cout << "\nEnter judge" << judgeNum << "'s score: ";
	cin >> currentScore;

	
	while (currentScore < 0 || currentScore > 10) {
		cout << "\nThe score cannot be less than 0 or over 10.\nTry again: ";
		cin >> currentScore;
	}
	scoreSum += currentScore;
}

double calcAverage(int numJudges, double scoreSum, double highestScore, double lowestScore) {
	double average, WithoutHighestLowest;

	scoreSum -= lowestScore; 
	scoreSum -= highestScore; 

	WithoutHighestLowest = numJudges - 2;
	average = scoreSum / WithoutHighestLowest;

	cout << endl;
	cout << "\nlowest = " << lowestScore << "\nhighest = " << highestScore << "\naverage = " << average;
	return average;
}

bool isLower(double newValue, double currentLowest) {
	return newValue < currentLowest;
}

bool isHigher(double newValue, double currentHighest) {
	return newValue > currentHighest;
}