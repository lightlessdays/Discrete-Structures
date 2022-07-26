#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    int fib = fibonacci(n - 1) + fibonacci(n - 2);

    return fib;
}

int main()
{
    int n;
    cout << "Enter Term: ";
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
