#include <iostream>
using namespace std;
// Fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers.
void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        printFibonacci(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements to get the fibonacci series: ";
    cin >> n;
    cout << "The Fibonacci Series of " << n << " elements is:" << endl;
    cout << "0 "
         << "1 ";
    printFibonacci(n - 2); // n-2 because 2 numbers are already printed
    return 0;
}