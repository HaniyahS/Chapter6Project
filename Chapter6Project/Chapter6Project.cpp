// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
void getScore(double &);
double calcAverage(double, double, double, double, double);
double isLower(double, double, double, double, double);
double isHigher(double, double, double, double, double);

int i = 1;
int main() {
   
    double score1, score2, score3, score4, score5;
   
    getScore(score1);
    i++;
    getScore(score2);
    i++;
    getScore(score3);
    i++;
    getScore(score4);
    i++;
    getScore(score5);

    double sum = score1 + score2 + score3 + score4 + score5;
    cout << "\nContestant's score: " << sum;
    cout << calcAverage(score1, score2, score3, score4, score5);
    cout << endl;

    return 0;
}

//Function definition
void getScore(double &score) {
  
    cout << "\nEnter judge " << i << "'s score: ";
    
        cin >> score;
        

        while (score < 0 || score > 10) {
            cout << "\nThe score cannot be less than 0 or over 10";
        }

}

double calcAverage(double score1, double score2, double score3, double score4, double score5) {
    double lowest = isLower(score1, score2, score3, score4, score5);
    double highest = isHigher(score1, score2, score3, score4, score5);
    double average, sum = score1 + score2 + score3 + score4 + score5;

    sum -= lowest;
    sum -= highest;

    average = sum / 3;

    cout << endl;
    cout << "\nlowest = " << lowest << "\nhighest = " << highest << "\naverage = " << average;
    return average;
}

double isHigher(double score1, double score2, double score3, double score4, double score5) {

    if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5) {
        return score1;

    }
    else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5) {
        return score2;

    }
    else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5) {
        return score3;

    }
    else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5) {
        return score4;
    }
    else {
        return score5;
    }

}

double isLower(double score1, double score2, double score3, double score4, double score5) {

    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5) {
        return score1;

    }
    else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5){
        return score2;

    }
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5) {
        return score3;

    }
    else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5){
        return score4;

    }
    else {
        return score5;
    }

}