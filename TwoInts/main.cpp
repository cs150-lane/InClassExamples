//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Aug 31, 2022
// Class:					CS 150-02
// Assignment:		In Class Practice
// Purpose:				Read two ints and perform some calculations
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Ask the user for two ints and perfor some calculations
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main() {

	// declaration statements
	int firstInt;
	int secondInt;
	float average;

	// executable statements
	cout << "Please enter an integer: ";
	cin >> firstInt;

	cout << "Please enter an integer: ";
	cin >> secondInt;


	cout << "\nThe sum is: " << firstInt + secondInt << endl;

	cout << endl;

	cout << "The average is: " << (firstInt + secondInt) / 2 << endl;

	average = (firstInt + secondInt) / 2.00;

	cout << "The average is really: " << average
		<< endl;

	return EXIT_SUCCESS;
}