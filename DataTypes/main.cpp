//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Sept 7, 2022
// Class:					CS 150-02
// Assignment:		In Class Practice
// Purpose:				Practice with Data Types
// Hours Worked:	.1
//*********************************************************************
#include <iostream>
#include <string>
using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Practice with Data Types
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main() {
	int value;
	char letter = 'A';
	string name = "CS";

	bool bValue;

	bValue = true;
	cout << bValue << endl;
	bValue = false;
	cout << bValue << endl;
	value = 3 + 4;
	bValue = letter == 'A';
	cout << bValue << endl;

	return EXIT_SUCCESS;
}
