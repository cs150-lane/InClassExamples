//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 9, 2022
// Class:					CS 150-02
// Assignment:		In Class Practice
// Purpose:				Practice with arithmetic operators
// Hours Worked:	.1
//*********************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double mealCost;
	double tip, totalCost;

	cout << "Enter Meal Cost: $";
	cin >> mealCost;

	tip = mealCost * 0.15;
	totalCost = mealCost + tip;

	cout << fixed << setprecision(2);
	cout << endl << "Meal Cost: $" << mealCost << endl;
	cout << "Tip: $" << tip << endl;
	cout << "Total Cost: $" << totalCost << endl << endl;

	return EXIT_SUCCESS;
}