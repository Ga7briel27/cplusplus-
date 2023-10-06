// Chapter 6 - Programming Challenge 13, Future Value
// Given an initial deposit, a monthly interest rate and a 
// number of months, this program calculates how much money
// will be in the account at the end of those months. This
// solution includes a loop to allow multiple tests to be done
// in the same run, but the problem does not require that.

#include <iostream>
#include <iomanip>
#include <cmath>           // Needed to use the pow function
using namespace std;

// Function prototype
double futureValue(double p, double i, double t);

int main()
{
	double amtDeposited,   // Deposit amount (also called present value)
          moIntRate;      // Monthly interest rate (in decimal form)

	int months;            // Number of months the money is left to grow

	char doAgain;          // User entered character to loop again or quit
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "This program computes the amount of money you will have in an \n"
        << "account at the end of a specified number of months, based on the \n"
        << "amount you deposit now and the monthly interest rate. \n";
	do
	{	
		cout << "\nEnter the amount you are depositing: $";
		cin  >> amtDeposited;

		cout << "Enter the monthly interest rate (1/12 the annual rate) as a decimal: ";
		cin  >> moIntRate;
		
		cout << "Enter the number of months you will let the money grow: ";
		cin  >> months;

		cout << "\nAt the end of " << months << " months you will have $"
			<< futureValue(amtDeposited, moIntRate, months) << endl;
		
		cout << "Peform another calculation (y/n)? ";
		cin  >> doAgain;
		
	} while (doAgain == 'Y' || doAgain == 'y');

	return 0;
}// end of main function

/*************************************************************************
 *                               futureValue                             *
 * This function has parameters to accept the following:                 *
 * -- the initial amount deposited. This is called the present value (p).* 
 * -- the monthly interest rate (i), and                                 *
 * -- the time in months it will be left to grow (t).                    *
 * It uses these values to compute and return the amount that will be in *
 * the account at the end of the specified period.                                   *
 *************************************************************************/
double futureValue(double p, double i, double t)
{
	double finalAmt = p * pow(1 + i, t);
	return finalAmt;
	
}// end of futureValue function

/* SAMPLE RUN RESULTS

This program computes the amount of money you will have in an 
account at the end of a specified number of months, based on the 
amount you deposit now and the monthly interest rate. 

Enter the amount you are depositing: $5000
Enter the monthly interest rate (1/12 the annual rate) as a decimal: .0025
Enter the number of months you will let the money grow: 120

At the end of 120 months you will have $6746.77
Peform another calculation (y/n)? n
*/
