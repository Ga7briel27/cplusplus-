// Chapter 4 - Programming Challenge 9, Software Sales
//Use this as a guide to writing your solution
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RETAIL = 199.00; // Normal retail price per unit before discount
	int    unitsPurchased;        // Number of units purchased
	double discountPct,           // % discount based on sales volume
          totalCost;             // Total cost (for all units purchased) after discount
		    
	// Input number of units sold
	cout << "How many units are being purchased? ";
	cin  >> unitsPurchased;

	// Determine discount percentage
	if (unitsPurchased < 0)
		cout << "Units purchased cannot be less than zero.\n";
	else
	{
		if (unitsPurchased < 10)
			discountPct = 0.00;
		else if (unitsPurchased <= 19)
			discountPct = 0.20;
		else if (unitsPurchased <= 49)
			discountPct = 0.30;
		else if (unitsPurchased <= 99)
			discountPct = 0.40;
		else  // unitsPurchased was 100 or more
			discountPct = 0.50;
	   
		// Calculate total cost
		totalCost = unitsPurchased * RETAIL * (1 - discountPct);
		
		// Display formatted result
		cout << fixed << showpoint << setprecision(2);
		cout << "The total cost of the purchase is $" << totalCost << endl;
	}
	return 0;
}

/* 
Answer the following questions:
How many units are being purchased? 12
The total cost of the purchase is $1910.40
------------------------------------------
How many units are being purchased? 70
The total cost of the purchase is $8358.00

*/
