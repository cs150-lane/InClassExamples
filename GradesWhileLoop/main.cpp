//*********************************************************************
// File name:			main.cpp
// Author:				chris lane
// Date:					Sept 30, 2022
// Class:					CS 150-01
// Assignment:		In Class Practice
// Purpose:				Validation with while-loop
// Hours Worked:	.1
//*********************************************************************
#include <iostream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Ask user for exam score, print associated letter grade.
//              Continue until negative exam score entered
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main() {
	double examScore; 

	char grade; 

	const double A_CUTOFF = 90;
	const double B_CUTOFF = 80;
	const double C_CUTOFF = 70;
	const double D_CUTOFF = 60; 

	cout << "Please enter exam score:";
	cin >> examScore; 

	while (examScore >= 0) {

		if (examScore >= A_CUTOFF) {
			grade = 'A';
		}
		else if (examScore >= B_CUTOFF) {
			grade = 'B';
		}
		else if (examScore >= C_CUTOFF) {
			grade = 'C';
		}
		else if (examScore >= D_CUTOFF) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		cout << "Exam grade is: " << grade << endl;

		cout << "Please enter exam score:";
		cin >> examScore;
	}

	return EXIT_SUCCESS;
}