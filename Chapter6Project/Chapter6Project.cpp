// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
int getRegInfo(int region, int accidents);

int main() {
    int region, accidents;

    getRegInfo(int region , int accidents);
}

// Function to get region info
int getRegInfo(int region, int accidents) {
    cout << "\nCentral = 1  North = 2  South = 3\nEast = 4  West = 5\nEnter region number: ";
    cin >> region;
    cout << "\nEnter number of accidents: ";
    cin >> accidents;
    if (accidents < 0) {
        cout << "\nNumber of accidents can't be negative";
        cout << "\nEnter number of accidents: ";
        cin >> accidents;
    }
}
