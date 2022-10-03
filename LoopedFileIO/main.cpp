//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Oct 3, 2022
// Class:					CS 150-01
// Assignment:		In Class Practice
// Purpose:				File IO
// Hours Worked:	0.1
//*********************************************************************
#include <iostream>
#include <fstream> // file stream

#include <string>

using namespace std;

int main() {
	int retVal = EXIT_SUCCESS;
	ifstream inputFile; // file variable

	double value;
	double sum = 0.0;
	int count = 0;
	const double SENTINEL = -99.0;

	inputFile.open("numbers.txt"); // attach to file on hard drive

	if (inputFile.fail()) { // test if open correctly
		cout << " Failed to Open File!\n\n";
		retVal = EXIT_FAILURE;
	}

	if (EXIT_SUCCESS == retVal)
	{

		inputFile >> value; // initialize

		while (SENTINEL != value) { // test
			sum += value; // work
			count++;

			inputFile >> value; // update
		}

		inputFile.close();

		cout << "Avg: " << sum / count;
		cout << endl;

	}

	return retVal;
}