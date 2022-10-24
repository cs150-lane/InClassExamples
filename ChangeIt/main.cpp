//*********************************************************************
// File name:			main.cpp
// Author:				CS Lecture
// Date:					October 24, 2022
// Class:					CS 150-02
// Assignment:		Lecture 14 - ChangeIt Example
// Purpose:				Illustrate difference between pass by value and pass
//                by reference through multiple function calls
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

void changeIt (int j, int& i, int& l);

//*********************************************************************
// Function:		main
//
// Description: Passes arguments to changeIt function, prints out 
//              results after each function call.  
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************


int main () {
  int i, j, k, l;
  i = 2;
  j = 3;
  k = 4;
  l = 5;
  changeIt (i, j, k);
  cout << i << j << k << endl;
  changeIt (k, l, i);
  cout << i << k << l << endl;

  return EXIT_SUCCESS;
}

//*********************************************************************
// Function:		changeIt
//
// Description: Makes changes to all parameters to illustrate 
//              difference between pass by value and pass by reference
//
// Parameters:	 j - integer
//              &i - integer
//              &l - integer
//
// Returned:		none
//*********************************************************************

void changeIt (int j, int& i, int& l) {
  i++;
  j += 2;
  j += 2;
  l += i;
}