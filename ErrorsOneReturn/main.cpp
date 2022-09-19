//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 17, 2022
// Class:					CS 150-02
// Assignment:		Assignment #2 Clarification
// Purpose:				Clarify how to handle the incorrect input correctly
// Hours Worked:	0.1
//*********************************************************************

#include <iostream>

using namespace std;

int main() {

	int length, width;
	int retVal = EXIT_FAILURE;

	cout << "Enter the length: ";
	cin >> length;

	if (length >= 1) {
		cout << "Enter the width: ";
		cin >> width;

		if (width >= 1) {
			cout << "AREA: " << length * width << endl;
			retVal = EXIT_SUCCESS;
		}
	}

	if (retVal == EXIT_FAILURE) {
		cout << "Incorrect Input - Terminating Program" << endl;
	}

	return retVal;
}