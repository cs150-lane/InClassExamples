//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 27, 2022
// Class:					CS 150-02
// Assignment:		In Class Examples
// Purpose:				Loops
// Hours Worked:	0.1
//*********************************************************************

#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Ask the user for an int and print 0 to that int^2
// 
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main()
{
	int userInt;
	int square;
	int counter = 0; // INITIALIZE THE COUNTER

	cout << "Enter an integer: ";
	cin >> userInt;

	// Don't calculate the square in the
	// loop test
	square = userInt * userInt;

	while (counter <= square) { // TEST THE COUNTER
	
		// DO WORK
		cout << counter << " ";

		counter++; // UPDATE COUNTER
	}
 
	cout << endl;
	return EXIT_SUCCESS;
}