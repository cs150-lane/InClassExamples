//*********************************************************************
// File name:			main.cpp
// Author:				chadd williams
// Date:					Oct 25, 2022
// Class:					CS 150-02
// Assignment:		In Class Examples
// Purpose:				Use rand()
// Hours Worked:	0.1
//*********************************************************************

#include <iostream>
#include <ctime>

using namespace std;

//*********************************************************************
// Function:		main
//
// Description: Print some random numbers
// 
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************
int main ()
{
	int random;
	const int MAX = 100;

	// produce new random numbers each time
	// Base the random numbers on the 
	// current time
	srand (static_cast<unsigned>(time 
		(static_cast<time_t*>(NULL))));


	// always produce the same random numbers
	// srand (150);

	for (int i = 0; i < 10; i++)
	{
		random = rand () % MAX;

		cout << "Random number: 0 - " << MAX - 1 << ": "
				 << random << endl;
	}
	
	return EXIT_SUCCESS;
}