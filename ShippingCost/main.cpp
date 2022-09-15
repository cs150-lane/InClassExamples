//*********************************************************************
// File name:			main.cpp
// Author:				chris lane
// Date:					Sept 14, 2022
// Class:					CS 150-01
// Assignment:		In Class Practice
// Purpose:				Practice with single-alternative ifs
// Hours Worked:	0.1
//*********************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double order;
	int shippingCost;  

	const int HIGH_SHIPPING_CUTOFF = 30;

	const int HIGH_SHIPPING_COST = 5; 
	const int MODERATE_SHIPPING_COST = 3;  

	cout << "Enter order amount in dollars: $";
	cin >> order;

	if (order <= HIGH_SHIPPING_CUTOFF) {
		shippingCost = HIGH_SHIPPING_COST;
	}

	if (order > HIGH_SHIPPING_CUTOFF) {
		shippingCost = MODERATE_SHIPPING_COST;
	}

	cout << "The shipping cost is: $" << shippingCost; 

	return EXIT_SUCCESS;
}