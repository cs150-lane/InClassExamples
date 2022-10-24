//*********************************************************************
// File name:			main.cpp
// Author:				CS Lecture
// Date:					October 24, 2022
// Class:					CS 150-02
// Assignment:		Lecture 14 - valTest and refTest example
// Purpose:			  Illustrate difference between pass by val and ref
// Hours Worked:	.1
//*********************************************************************

#include <iostream>

using namespace std; 

void valTest (int param1, int param2);
void refTest (int& param1, int& param2);

//*********************************************************************
// Function:		main
//
// Description: Passes arguments to function valTest and refTest and
//              prints out results after each function call
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************

int main () {
  int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
  
  valTest (val1, val2);
  cout << val1 << val2 << endl;

  refTest (val3, val4);

  cout << val3 << val4 << endl;

  return EXIT_SUCCESS;
}

//*********************************************************************
// Function:		valTest
//
// Description: Illustrates pass by value
//
// Parameters:	param1 - first integer
//              param2 - second integer
//
// Returned:		none
//*********************************************************************

void valTest (int param1, int param2) {
  param1 = 33;
  param2 = 44;
}

//*********************************************************************
// Function:		refTest
//
// Description: Illustrates pass by reference
//
// Parameters:	&param1 - first integer
//              &param2 - second integer
//
// Returned:		none
//*********************************************************************

void refTest (int& param1, int& param2) {
  param1 = 77;
  param2 = 88;
}