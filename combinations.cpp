/*
1. Take the input of n and r in floating type.
2. Using CalcCombination(), calculate (n/r)*CalcCombination(n-1,r-1) recursively.
3. Return to main and print the result in an integer type.
4. Exit.
*/

#include <iostream>

using namespace std;

// A function to calculate combination using recurrence relation.
float CalcCombination(float n, float r)
{
	int i, res;
	if (r > 0)
		return (n / r) * CalcCombination(n - 1, r - 1);
	else
		return 1;
}

int main()
{
	float n, r;
	int result;
	cout << "A program to find combination from nCr format";
	cout << "\n\n\tEnter the value of n: ";
	cin >> n;
	cout << "\tEnter the value of r: ";
	cin >> r;

	// Get result using recurrence relation.
	result = CalcCombination(n, r);
	cout << "\nThe number of possible combinations is: " << result << endl;
}
