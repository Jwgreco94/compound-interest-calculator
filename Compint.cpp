/*

Jonathan Greco
Professor Viviano
Programming I
12 November 2016

Program: Compound Interest Earned.
This program is designed to calculate the compounded
interest earned from user input, assuming no additional
deposits were made.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

// Define the Variables

	double principal,		// To hold the principal.
		   interestRate,	// To hold the interest rate.
		   interest,		// To hold the interest earned.
		   savings,			// Calculates the new balance with the compounded interest.
		   percent,			// To hold interest rate as a percent.
		   time;			// To hold the number of times compounded.
		   		
// Get the Principal from the user.

	cout << "Enter the amount of the principal amount?" << endl;
	cout << "Do Not use commas between numbers:  ";
	cin >> principal;
	cout << "" << endl;

// Get the interest rate from the user.

	cout << "What is the interest rate?" << endl;
	cout << ".0425 (for 4.25%):  ";
	cin >> interestRate;
	cout << "" << endl;

// Get the number of times compounded.

	cout << "How many times has it been compounded:  ";
	cin >> time;
	cout << "" << endl;

// Calculate the total amount of compound interest earned.

		savings = principal * pow(1.0 + interestRate / time, time);

// Calculate the amount of interest earned.

		interest = savings - principal;

// Calculate the interest rate into a percent for display.

		percent = interestRate * 100;

// Display the results in a column using manipulators.

		cout << "---------------------------------------------" << endl;
		cout << "Interest Rate: " << setw(29) << percent << "%" << endl;
		cout << "Times Compounded: "  << setw(26) << time << endl;
		cout << "Principal: " << setprecision(2) << fixed << setw(26) << "$" << principal << endl;
		cout << "Interest: " << setprecision(2) << fixed << setw(29) << "$" << interest  << endl;
		cout << "Amount in Savings: " << setprecision(2) << fixed << setw(18) << "$"<< savings << endl;
		cout << "---------------------------------------------" << endl;
	return 0;
}