//*********************************************************************
// File name:			main.cpp
// Author:				CS Lecture
// Date:					October 24, 2022
// Class:					CS 150-02
// Assignment:		Lecture 14 - Swap Example
// Purpose:				Illustrate pass by reference by swapping values for 
//                two arguments in the calling function
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

void swap (int& num1, int& num2);

//*********************************************************************
// Function:		main
//
// Description: Ask the user for two ints and perfor some calculations
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************

int main () {
  int i, j;
  cin >> i >> j;
  swap (i, j);
  cout << i << j;

  return EXIT_SUCCESS;
}

//*********************************************************************
// Function:		swap
//
// Description: Swaps by reference two integers in calling function
//
// Parameters:	&num1 - first integer
//              &num2 -second integer
//
// Returned:		none
//*********************************************************************

void swap (int& num1, int& num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}