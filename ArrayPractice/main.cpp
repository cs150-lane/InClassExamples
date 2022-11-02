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

	const int MAX_SIZE = 10;
	int y, x = 3;

	int years[MAX_SIZE];

	years[0] = 2;
	years[x] = 4;

	y = years[0] + 9;

	return EXIT_SUCCESS;
}