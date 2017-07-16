// ChangeProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

// Below  is a function to  pass change that is need so we can give the correct coins
void makeChange(double change) {
	double amount = change;    //makes amount in this function equal to users amount entered

	int convAmount = amount * 100;// this will change the double into an integer for easier conversion

								  // Below we divide the total change needed by the amount that each coin is worth and then get the remainder left.

	cout << " Your change is " << convAmount / 25 << " quarters ";
	convAmount = convAmount % 25;
	cout << " , " << convAmount / 10 << " dimes ";
	convAmount = convAmount % 10;
	cout << " , " << convAmount / 5 << " nickels ";
	convAmount = convAmount % 5;
	cout << " , " << convAmount / 1 << " pennies ";


}
int main()
{

	double total = 0;
	double amountGiven = 0;
	char choice = 'y';

	while (choice == 'y') { // allows user to choice if he needs to use program
		cout << "Enter total amount: " << endl;
		cin >> total;
		cin.ignore();
		cout << "Enter the amount you were given: " << endl;
		cin >> amountGiven;
		cin.ignore();

		double change = amountGiven - total;// subtracting amount given with total due to get change need
		makeChange(change);// calling our make change function and inserting change as perameter

		cout << "Would you like to continue? ('y'-for yes)('n'-for no): " << endl;
		cin >> choice;
	}
	return 0;
}
