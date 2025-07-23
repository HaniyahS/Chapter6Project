// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
void getLengthWidth(double& length, double& width);
double calcPerimeter(double length, double width);
double calcArea(double length, double width);
void displayProperties(double length, double width, double area, double perimeter);

int main() {
    double length, width, area, perimeter;

    //Calling function

    getLengthWidth(length, width);

    //Assigning
    perimeter = calcPerimeter(length, width);
    area = calcArea(length, width);

    // Display the properties of the rectangle
    displayProperties(length, width, area, perimeter);

    return 0;
}

// Function to get length and width from the user
void getLengthWidth(double& length, double& width) {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

// Function to calculate the perimeter of the rectangle
double calcPerimeter(double length, double width) {
    return 2 * (length + width);
}

// Function to calculate the area of the rectangle
double calcArea(double length, double width) {
    return length * width;
}

// Function to display the properties of the rectangle
void displayProperties(double length, double width, double area, double perimeter) {
    cout << "\nRectangle Properties:";
    cout << "\nLength: " << length;
    cout << "\nWidth: " << width;
    cout << "\nArea: " << area;
    cout << "\nPerimeter: " << perimeter << endl;
}

