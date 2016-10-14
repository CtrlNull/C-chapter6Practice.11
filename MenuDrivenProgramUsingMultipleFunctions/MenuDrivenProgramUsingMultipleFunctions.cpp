/*
	This is a menu-driven program that makes a function call
	for each selection the user makes
 */

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showMenu();
void showFees(double, int);

int main()
{
	int choice;			// To hold a menu choice
	int months;			// To hold a number of months

	// Constants for the menu choices
	const int ADULT_Choice = 1,
			  CHILD_Choice = 2,
			  Senior_Choice = 3,
			  Quit_Choice = 4;

	// Constants for membership rates
	const double ADULT = 40.0,
				 CHILD = 20.0,
				 SENIOR = 30.0;

	// Set up numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	do
	{
		// Display the menu and get the user's choice
		showMenu();
		cin >> choice;

		// Validate the menu selection
		while (choice < ADULT_Choice || choice > Quit_Choice)
		{
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
		}
		// If the user foes not want to quit, proceed
		if (choice != Quit_Choice)
		{
			// Get the number of months
			cout << "For how many months? ";
			cin >> months;

			// Display the membership fees
			switch (choice)
			{
			case ADULT_Choice:
				showFees(ADULT, months);
				break;
			case CHILD_Choice:
				showFees(CHILD, months);
				break;
			case Senior_Choice:
				showFees(SENIOR, months);
			}
		}
	}while(choice != Quit_Choice);
	return 0;
}

// Definition of function showMenu which displays the menu

void showMenu()
{
	cout << "\n\t\tHealth Club Membership Menu\n\n"
		<< "1. Standard Adult Membership\n"
		<< "2. Child Membership\n"
		<< "3. Senior Citizen Membership\n"
		<< "4. Quit the Program\n\n"
		<< "Enter your choice: ";
}

/*
	Definition of function showFeeds
	The memberRate parameter holds the monthly membership rate and the months
	parameter holds the number of months. the function displays the total charges.
*/

void showFees(double memberRate, int months)
{
	cout << "The total charges are $"
		<< (memberRate * months) << endl;
}


