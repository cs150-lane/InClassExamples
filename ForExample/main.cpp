//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Oct 12, 2022
// Class:					CS 150-02
// Assignment:		In Class Practice
// Purpose:				For practice
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Practice a for loop
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main() {

	int userInput;

	cin >> userInput;

	for (int i = 1; i <= userInput; i++) {

		for (int j = 0; j < i; j++) {
			cout << i;
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}