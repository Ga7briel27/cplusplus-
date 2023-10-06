// Lab 6 fortunes.cpp 
// This fortune telling program will be modified to use a void function.
// PUT YOUR NAME HERE.
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// WRITE A PROTOTYPE FOR THE tellFortune FUNCTION HERE.
void tellfortune(int a,int b)
{}

/*****     main     *****/
int main()
{
   int numYears,
       numChildren;
          
   cout << "This program can tell your future. \n"
        << "Enter two integers separated by a space: ";
  cin >> numYears >> numChildren;
    tellfortune(numYears, numChildren);        
   cout << "\nYou will be married in " << numYears << " years "
        << "and will have " << numChildren << " children.\n";
  
   return 0;
}
void tellfortune(int numyears,numchildren)
{
   numYears = abs(numyears) % 5;       // Convert to a positive integer 0 to 4
   numChildren = abs(numchildren) % 6; // Convert to a positive integer 0 to 5
   }
/*****     tellFortune     *****/
// WRITE THE tellFortune FUNCTION HEADER HERE.
// WRITE THE BODY OF THE tellFortune FUNCTION HERE.
