// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Function prototype - now takes minRegion and minAccidents as references
void getRegInfo(string& Region, int& accidents, string& minRegion, int& minAccidents);
void showsLowest(string Region, int accidents);
bool isLower(int newValue, int currentLowest);

int main() {
    // Variables
    int accidents;
    int numRegions;
    string Region;

    // Local not global
    string minRegion;
    int minAccidents;

    cout << "Enter # of regions: ";
    cin >> numRegions;

    // Getting Region info
    // Initializing minRegion and minAccidents with the first region's data
    getRegInfo(Region, accidents, minRegion, minAccidents);

    // Assigning the first region's data to minRegion and minAccidents
    minRegion = Region;
    minAccidents = accidents;

    for (int i = 1; i < numRegions; i++) {

        // Passes minRegion and minAccidents to getRegInfo
        getRegInfo(Region, accidents, minRegion, minAccidents);

        if (isLower(accidents, minAccidents)) {
            minRegion = Region;
            minAccidents = accidents;
        }
    }

    
    showsLowest(minRegion, minAccidents);

    return 0;
}

// Asks for number of accidents and validates input.
void getRegInfo(string& Region, int& accidents, string& minRegionRef, int& minAccidentsRef) { // Takes minRegion and minAccidents as references
    cout << "\nEnter name of Region: ";
    cin >> Region;

    cout << "\nEnter the # of accidents for Region " << Region << ": ";
    cin >> accidents;

    while (accidents < 0) {
        cout << "\n# of accidents cannot be less than 0.\nTry again: ";
        cin >> accidents;
    }
}


bool isLower(int newValue, int currentLowest) {
    return newValue <= currentLowest;
}


void showsLowest(string Region, int accidents) {

    // Using the local Region and accidents passed to this function
    cout << "\nThe safest region is " << Region 
        << " with " << accidents << " reported accidents last year.\n";
}


    
        