//*********************************************************************
// File name:			main.cpp
// Author:				Chris Lane
// Date:					Nov 2, 2022
// Class:					CS 150-02
// Assignment:		In Class Examples
// Purpose:				Arrays and Files
// Hours Worked:	0.1
//*********************************************************************
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Read data into an array and process that data
// 
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main () {

	const double SENTINEL = -99.0;
	const string INPUT_FILE = "exams.txt";
	const int MAX_EXAM_SCORES = 100;

	double examScore; // reading in from file
	double maximumScore = -1;

	int counter = 0; // use as index in array
	ifstream inputFile;

	double examScores[MAX_EXAM_SCORES];

	inputFile.open (INPUT_FILE);
	
	if (inputFile.fail ()) {

		cout << "Can't open file!";
		exit (EXIT_FAILURE);

	}

	inputFile >> examScore;

	while (SENTINEL != examScore) {

		//process
		examScores[counter] = examScore;
		counter++;

		inputFile >> examScore; // get another value
	}


	for (int index = 0; index <= counter; index++) {

		if (examScores[index] > maximumScore) {
			maximumScore = examScores[index];
		}

	}

	cout << "Maximum Score is: " << maximumScore;

	inputFile.close ();

	return EXIT_SUCCESS;

}