//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 27, 2022
// Class:					CS 150-02
// Assignment:		In Class Examples
// Purpose:				Running Total
// Hours Worked:	0.1
//*********************************************************************

#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Sum the numbers from 0 to 10
// 
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main()
{
	int counter = 0; // INITIALIZE THE COUNTER
	int runningTotal = 0; // INITIALIZE RUNNING TOTAL
	const int MAX = 10;

	while (counter <= MAX) { // TEST THE COUNTER

		// DO WORK
		runningTotal += counter;

		counter++; // UPDATE COUNTER
	}


	cout << "Sum: " << runningTotal << endl;
	return EXIT_SUCCESS;
}