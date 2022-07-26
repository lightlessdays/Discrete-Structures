#include <iostream>
using namespace std;

int fibonacci(int n)
{
  if (n == 1 || n == 2)
    return n - 1;

  int fm = 0;
  int f = 1;
  int fn;

  for (int i = 3; i <= n; i++)
  {
    fn = f + fm;
    fm = f;
    f = fn;
  }
  return fn;
}

int main()
{
  int n;
  cout << "Enter the number of terms:";
  cin >> n;
  cout << fibonacci(n) << endl;
}