//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Nov 2, 2022
// Class:					CS 150-02
// Assignment:		In Class Examples
// Purpose:				Arrays 
// Hours Worked:	0.1
//*********************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Array practice
// 
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main () {

	const int MAX_SIZE = 6;

	double trees[MAX_SIZE];

	trees[0] = 32.6;
	trees[1] = 45.0;

	for (int i = 0; i < MAX_SIZE; ++i) {

		cout << setw (8) << trees[i];
	}
	cout << endl << endl;

	return EXIT_SUCCESS;
}