// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int getRegInfo(int , int , int , int , int);
void showsLowest();

// Variables
int accidents, northAccidents = 0, southAccidents = 0, eastAccidents = 0, westAccidents = 0, centralAccidents = 0;



int main() {
    //Getting Region info
   getRegInfo(northAccidents , southAccidents , eastAccidents , westAccidents , centralAccidents);
    

    // Calls function to find which region had the lowest amount.
    showsLowest();

    return 0;
}

// Asks for number of accidents and validates input.
int getRegInfo(int northAccidents , int southAccidents , int eastAccidents , int westAccidents , int centralAccidents) {
    cout << "For the North region:\n";
    cout << "Enter the number of accidents during last year: ";
    cin >> northAccidents;
    cout << "\n";

    if (northAccidents < 0) {
        cout << "Error: Accident amount cannot be less than 0.\nEnter a valid amount of accidents: ";
        cin >> northAccidents;

    }
    else if(northAccidents > 0) {

        cout << "For the South region:\n";
        cout << "Enter the number of accidents during last year: ";
        cin >> southAccidents;
        cout << "\n";

        if (southAccidents < 0) {
            cout << "Error: Accident amount cannot be less than 0.\nEnter a valid amount of accidents: ";
            cin >> southAccidents;
        }
        else if (southAccidents > 0) {
            
            cout << "For the East region:\n";
            cout << "Enter the number of accidents during last year: ";
            cin >> eastAccidents;
            cout << "\n";

            if (eastAccidents < 0) {
                cout << "Error: Accident amount cannot be less than 0.\nEnter a valid amount of accidents: ";
                cin >> eastAccidents;
            }
            else if (eastAccidents > 0) {
                
                cout << "For the West region:\n";
                cout << "Enter the number of accidents during last year: ";
                cin >> westAccidents;
                cout << "\n";

                if (westAccidents < 0) {
                    cout << "Error: Accident amount cannot be less than 0.\nEnter a valid amount of accidents: ";
                    cin >> westAccidents;
                }
                else if (westAccidents > 0) {
                    
                    cout << "For the Central region:\n";
                    cout << "Enter the number of accidents during last year: ";
                    cin >> centralAccidents;
                    cout << "\n";

                    if (centralAccidents < 0) {
                        cout << "Error: Accident amount cannot be less than 0.\nEnter a valid amount of accidents: ";
                        cin >> centralAccidents;
                    }
                    else if (centralAccidents > 0) {
                        

                    }


                }

            }

        }


        return northAccidents , southAccidents , eastAccidents , westAccidents , centralAccidents;

    }

    

    

   

    

}

// Compares region amounts
void showsLowest() {
    // Prints results
    cout << "\nNorth region amount of accidents: " << northAccidents << endl;
    cout << "South region amount of accidents: " << southAccidents << endl;
    cout << "East region amount of accidents: " << eastAccidents << endl;
    cout << "West region amount of accidents: " << westAccidents << endl;
    cout << "Central region amount of accidents: " << centralAccidents << endl;

    // If North has least amount
    if (northAccidents < southAccidents &&
        northAccidents < eastAccidents &&
        northAccidents < westAccidents &&
        northAccidents < centralAccidents)
    {
        cout << "\nThe North region had the lowest amount of accidents with ";
        cout << northAccidents << " accident(s).\n";
    }

    // If South has least amount
    else if (southAccidents < northAccidents &&
        southAccidents < eastAccidents &&
        southAccidents < westAccidents &&
        southAccidents < centralAccidents)
    {
        cout << "\nThe South region had the lowest amount of accidents with ";
        cout << southAccidents << " accident(s).\n";
    }

    // If East has least amount
    else if (eastAccidents < northAccidents &&
        eastAccidents < southAccidents &&
        eastAccidents < westAccidents &&
        eastAccidents < centralAccidents)
    {
        cout << "\nThe East region had the lowest amount of accidents with ";
        cout << eastAccidents << " accident(s).\n";
    }

    // If West has least amount
    else if (westAccidents < northAccidents &&
        westAccidents < southAccidents &&
        westAccidents < eastAccidents &&
        westAccidents < centralAccidents)
    {
        cout << "\nThe West region had the lowest amount of accidents with ";
        cout << westAccidents << " accident(s).\n";
    }

    // If Central has least amount
    else {
        cout << "\nThe Central region had the lowest amount of accidents with ";
        cout << centralAccidents << " accident(s).\n";
    }
}