/*
Fibonacci Series: 0,1,1,2,3,5 and so on...
We want to print the first n elements of fibonacci series.
So, we will return fibonacci(n-1)+fibonacci(n-2).
What will happen is: say n=3
then we will return f(2)+f(1)
f(1) will return 1. f(2) will return f(1)+f(0)=>1+0
f(3) will return f(2)+f(1)
f(4) will return f(3)+f(2) and so on...

this is the whole fibonacci series-> we have to return the sum of fibonacci term(n-1)+fibonacci term(n-2) and if the number is less than 1, then n-1 and n-2 does not exist toh seedhe n hi return kar dege. 
*/

#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2); 
}
int main() {
   int n;
   cout<<"Enter the nth term: ";
   cin>>n;
   for(int i=0;i<n;i++)
       cout<<fibonacci(i)<<endl;
}
