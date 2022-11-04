//	**********************************************************************
//	File name:		16ScoresParallel.cpp
//	Author:				Instructor!
//	Date:					11/4/2022
//	Class:				CS-150-0x
//	Example:			Lecture 16, Slides 13-14: Professor Scores
//	Purpose:			Reads student, average pairs in from file into parallel 
//								arrays and 1) prints PUNetID's of students who have a
//								score between 88 and 100, 2) add 10 bonus points to 
//								student AAAA1234, and 3) prints out overall class 
//								average
//	**********************************************************************

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

	const int MAX_NUM_STUDENTS = 100;

	// Print PUNETID's if overall average is between these two values
	const int LOWER_SCORE = 88;
	const int UPPER_SCORE = 100;

	// Sentinel for PUNETID
	const string PUNETID_SENTINEL = "sentinel";

	// student who gets a bonus, and bonus amount 
	const string PUNETID_BONUS = "AAAA1234";
	const double BONUS_POINTS = 10;
	const string INPUT_FILE = "grades.txt";

	// Arrays to hold PUNETID's, average scores
	string puNetIDArray[MAX_NUM_STUDENTS];
	double finalAverageArray[MAX_NUM_STUDENTS];

	// Variables to read in individual values from file
	string puNetID;
	double finalAverage = 0.0;

	double sum = 0.0; // running sum of scores
	double average = 0.0; // overall class average

	int counter = 0;

	ifstream inputFile;

	inputFile.open (INPUT_FILE);

	if (inputFile.fail ()) {
		cout << "Could not open input file.";
		exit (EXIT_FAILURE);
	}

	inputFile >> puNetID >> finalAverage;

	while (PUNETID_SENTINEL != puNetID) {
		puNetIDArray[counter] = puNetID;
		finalAverageArray[counter] = finalAverage;
		counter++;
		inputFile >> puNetID >> finalAverage;
	}

	// Print out PUNETID's of students whose score is between
	// LOWER_SCORE and UPPER_SCORE

	cout << "PUNETID's for students with averages between "
		<< LOWER_SCORE << " and " << UPPER_SCORE << ":" << endl;

	for (int i = 0; i < counter; i++) {
		if (LOWER_SCORE <= finalAverageArray[i] &&
			UPPER_SCORE >= finalAverageArray[i]) {
			cout << puNetIDArray[i] << endl;
		}
	}


	// Add BONUS_POINTS to student PUNETID_BONUS;
	for (int i = 0; i < counter; i++) {
		if (PUNETID_BONUS == puNetIDArray[i]) {
			finalAverageArray[i] += BONUS_POINTS;
			cout << "\n" << puNetIDArray[i] << " average has been increased to "
				<< finalAverageArray[i] << endl;
		}
	}

	// Print out overall class average
	for (int i = 0; i < counter; i++) {
		sum += finalAverageArray[i];
	}

	if (0 != counter) {
		average = sum / counter;
	}

	cout << "\nFinal class average is: " << average;
	cout << endl;

	return EXIT_SUCCESS;
}