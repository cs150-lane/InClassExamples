//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 12, 2022
// Class:					CS 150-02
// Assignment:		In Class Practice
// Purpose:				Practice with modulus
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Practice with mod
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main() {

	int startingPennies;
	int startingNickles;
	int totalCents;

	int endingDollars;
	int endingPennies;

	const int NICKLE_VALUE = 5;
	const int PENNY_VALUE = 1;

	const int DOLLAR_VALUE = 100;

	cout << "\nEnter Nickles: ";
	cin >> startingNickles;
	cout << "Enter Pennies: ";
	cin >> startingPennies;

	cout << endl << endl;

	totalCents = PENNY_VALUE * startingPennies + 
		NICKLE_VALUE * startingNickles;

	endingDollars = totalCents / DOLLAR_VALUE;
	endingPennies = totalCents % DOLLAR_VALUE;

	// changed output to fix the English grammar!
	cout << "Dollars: " << endingDollars << endl;
	cout << "Pennies: " << endingPennies << endl;

	cout << endl;

	return EXIT_SUCCESS;
}