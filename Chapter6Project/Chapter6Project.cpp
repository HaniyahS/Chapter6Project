// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Function Prototype
void getRegInfo(string& Region , int& accidents);
void showsLowest(string Region , int accidents);
bool isLower(int newValue, int currentLowest);

// Variables
int accidents, minAccidents;
int numRegions;
string Region, minRegion;

int main() {
    int g = 1;
    cout << "Enter # of regions: ";
    cin >> numRegions;

    //Getting Region info
    //Intialize
   getRegInfo(minRegion, minAccidents);
   g++;

   for (int i = 1; i < numRegions; i++) {
       getRegInfo(Region, accidents);

       if (isLower(accidents, minAccidents)) {
           minRegion = Region;
           minAccidents = accidents;
       }
       
   }
    
   

    // Calls function to find which region had the lowest amount.
    showsLowest(minRegion , minAccidents);

    return 0;
}

// Asks for number of accidents and validates input.
void getRegInfo(string& Region , int& accidents) {
    
    
    
    
        cout << "\nEnter name of Region " << ": ";
        cin >> Region;
        
        minRegion = Region;

        cout << "\nEnter the # of accidents for Region " << Region << ": ";
        cin >> accidents;

        while (accidents < 0) {
            cout << "\n# of accidents cannot be less than 0.\nTry again: ";
            cin >> accidents;

    }
    
}

// Function to compare accident numbers and return true if new is lower
bool isLower(int newValue, int currentLowest) {
    return newValue <= currentLowest;
}

// Function to display the region with the lowest number of accidents
void showsLowest(string Region, int accidents) {
    cout << "\nThe safest region is " << minRegion
        << " with " << minAccidents << " reported accidents last year.\n";
}



    
        