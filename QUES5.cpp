/*
Fibonacci has simple logic: If you want to find the nth term, you need to add n-1 and n-2th term.
If you get n less than 1, then just return n, because then n-1 and n-2 will not exist.
*/

#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<endl;
    }
}
