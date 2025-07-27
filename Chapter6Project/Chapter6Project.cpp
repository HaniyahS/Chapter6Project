// Chapter6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype
int getRooms(int& Rooms);
double getSqFt(double& sum);
double getPricePG(double& price);


double sqft;
int g = 0;


int main() {
    double paintCharge = 0, labourCharge = 0, gallonsNeeded = 0, labourHours = 0, price, sum = 0;
    double LabourPerHour = 25.00;
    int Rooms;

    double PaintReq, LabourReq, CostPaint, LabourCharges, TotalCost;

    int numRooms;
    double sqft = 0;
    numRooms = getRooms(Rooms);
        
    getRooms(Rooms);
    for (int i = 0; i < numRooms; i++) {

        
        sqft += getSqFt(sum);

    }

    getPricePG(price);

    
    PaintReq = sum / 110;
    LabourReq = PaintReq * 8;
    CostPaint = price * PaintReq;
    LabourCharges = LabourReq * LabourPerHour;
    TotalCost = LabourCharges + CostPaint;

    cout << "\nTotal SqFt. painted: \t " << sum;
    cout << "\nPrice per gallon: \t$" << price;
    cout << "\nGallons required: \t " << ceil(PaintReq);
    cout << "\nHours required: \t " << LabourReq;
    cout << "\nCost of paint: \t\t$" << CostPaint;
    cout << "\nLabour charges: \t$" << LabourCharges;
    cout << "\nTotal cost: \t\t$" << TotalCost;


   //A painting company has determined that for every 110 square feet of wall space, 1 gallon of paint
   //and 8 hours of labor will be required.The company charges $25.00 per hour for labor.

    /*
    
    It should then display the following data :
    • The number of gallons of paint required
        • The hours of labor required
        • The cost of the paint
        • The labor charges
        • The total cost of the paint job

    gallons per square feet: 1/110.
    • hours of labor per square feet: 8/110.
    • labor charge per hour: $25
    
    main()
    Provide an estimate for painting including cost for paint, cost for labor, gallons of paint
required, number of labor hours

Algorithm: 


o gallons = gallonsForRoom(squareFeet)
o gallonsNeeded += gallons
o paintCharge += gallons * paintPrice
o labor = sqft * laborPerSqFt
o laborHours += labor
o laborCharge += labor * laborChargePerHour
    */
}
//Function definition


//numRooms = getRooms() for each room
int getRooms(int& Rooms) {
cout << "How many rooms are to be painted: ";
cin >> Rooms;

if(Rooms <= 1){
    cout << "\nNumber of rooms has to be over 1.\nTry again.";
    cout << "How many rooms are to be painted: ";
    cin >> Rooms;

}
else {
    return Rooms;
}

}

//squareFeet = getSqFt()
double getSqFt(double& sum) {
g++;

cout << "\nSq ft. of wall space in room " << g << ": ";
cin >> sqft;

if (sqft <= 0) {
    cout << "Square footage has to be over 0.\nTry again.";
    cout << "\nSq ft. of wall space in room " << g << ": ";
    cin >> sqft;
}
else {
    sum += sqft;
    return sum;
}

}

//paintPrice = getPricePerGallon()
double getPricePG(double& price) {
cout << "\nPrice of paint per gallon: ";
cin >> price;

if (price <= 10) {
cout << "\nThe price has to be over 10.\nTry again.";
cout << "\nPrice of paint per gallon: ";
cin >> price;
}
else {
    return price;
}

}


