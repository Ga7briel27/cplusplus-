/* Chapter 6 - Programming Challenge 9, Lowest Score Drop
 This program averages a set of test scores after dropping the lowest one.
Students have not yet learned about arrays, each test score will
 need to be stored in a separate variable.*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getScore(int &);	
void calcAverage(int, int, int, int, int);			
int  findLowest (int, int, int, int, int);			

int main()
{
	int test1, test2, test3, test4, test5;    // 5 user input test scores

	// Inform the user what the program does
	cout << "When you enter 5 test scores, I will drop the lowest \n"
        << "one and find the average of the four highest ones. \n\n";
	
	// Call getScore once for each test score to be input
	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	// Call calcAverage to calculate and display the average
	calcAverage(test1, test2, test3, test4, test5);

	return 0;
}// end of main function

//Get Score
void getScore(int &score)
{
	cout << "Enter a test score between 0 and 100: ";
	cin  >> score;
	while (score < 0 || score > 100) 
	{
		cout << "Score must be in the range 0 - 100. "
			 << "Please re-enter score: ";
		cin  >> score;
	}
}// end of function getScore

//Average
 void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int sum,                 // Sum of the 4 highest scores
       lowScore;            // Low score that will be dropped
	double average;

	// Call function findLowest, passing it the 5 scores.  When the
	// lowest score is returned, store it in the variable lowScore.
	lowScore = findLowest(s1, s2, s3, s4, s5);

	sum = s1 + s2 + s3 + s4 + s5 - lowScore;
	average = sum / 4.0;         // Prevent an integer divide

	cout << "\nAfter dropping the lowest score, the test average is " 
	     << average << endl;
}// end of function calcAverage

//Find the lowest value
int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest = s1;

	if (s2 < lowest)
		lowest = s2;
	if (s3 < lowest)
		lowest = s3;
	if (s4 < lowest)
		lowest = s4;
	if (s5 < lowest)
		lowest = s5;
	return lowest;
}// end of function findLowest

/* RUN These examples

When you enter 5 test scores, I will drop the lowest
one and find the average of the four highest ones.

Enter a test score between 0 and 100: 77
Enter a test score between 0 and 100: 91
Enter a test score between 0 and 100: 36
Enter a test score between 0 and 100: 88
Enter a test score between 0 and 100: 22
*/