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
	string prefix;
	int number;
	ifstream inputFile; // file variable
	ofstream outputFile;

	inputFile.open ("input.txt"); // attach to file on hard drive

	if (inputFile.fail()) { // test if open correctly
		cout << " Failed to Open File!\n\n";
		retVal = EXIT_FAILURE;
	}

	outputFile.open("reverse.txt"); // create or open
	if (outputFile.fail())
	{
		cout << " OUTPUT FILE FAILED TO OPEN\n";
		retVal = EXIT_FAILURE;
		inputFile.close();
	}

	if (EXIT_SUCCESS == retVal)
	{
		inputFile >> prefix >> number; // read from file
		
		outputFile << number << " " << prefix; // write to file

		cout << "I read: " << prefix << " " << number;
		cout << endl;

		inputFile.close (); // close(inputFile);
		outputFile.close();
		
	}

	return retVal;
}