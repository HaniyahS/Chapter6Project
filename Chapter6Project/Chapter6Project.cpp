// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
double getCelsius(int);

int main() {
    //Global constants
    const int MIN = 0 , MAX = 20;

    //Setting up table and loop
    cout << "Farenheit 0 - 20 to Celsius Temperature Table\n\nFarenheit             Celsius";
    for (int F = MIN; F <= MAX; F++) {

        cout << "\n " << setw(2) << F;
        cout << " " << setw(23) << getCelsius(F);
        cout << endl;
    }
    return 0;
}

//Function definition
double getCelsius(int F) {

    return (5 * (F - 32)) / 9;

}

