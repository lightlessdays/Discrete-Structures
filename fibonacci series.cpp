#include <iostream>
using namespace std;
// Fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers.
int main()
{
    int n, term1 = 0, term2 = 1, nextTerm = 0;

    cout << "Enter the number of terms to get fibonacci series: ";
    cin >> n;

    cout << "The Fibonacci Series of " << n << " terms is: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first term.
        if (i == 1)
        {
            cout << term1 << "  ";
            continue;
        }
        // Prints the second term.
        if (i == 2)
        {
            cout << term2 << "  ";
            continue;
        }
        // Calculation for further terms.
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        // Prints the remaining terms.
        cout << nextTerm << "  ";
    }
    return 0;
}
