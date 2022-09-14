//*********************************************************************
// File name:			main.cpp
// Author:				chris lane
// Date:					Sept 14, 2022
// Class:					CS 150-01
// Assignment:		In Class Practice
// Purpose:				Practice with accumulation and counting
// Hours Worked:	0.1
//*********************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double score;
	double scoreSum = 0.0;
	double scoreAverage;

	int count = 0;

	const int PASS_AVERAGE_CUTOFF = 60;

	cout << "Enter the first exam score: ";
	cin >> score;

	scoreSum = scoreSum + score;
	count = count + 1;

	cout << "Enter the second exam score: ";
	cin >> score;

	scoreSum = scoreSum + score;
	count = count + 1;

	cout << "Enter the third exam score: ";
	cin >> score;

	scoreSum = scoreSum + score;
	count = count + 1;

	scoreAverage = scoreSum / count;

	if (scoreAverage > PASS_AVERAGE_CUTOFF) {
		cout << "You Passed";
	}

	if (scoreAverage <= PASS_AVERAGE_CUTOFF) {
		cout << "You Failed";
	}

	return EXIT_SUCCESS;
}