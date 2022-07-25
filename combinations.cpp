/*
ASAAN SOLUTION. FACTORIAL KA RECUSTION. NCR = N!/R!(N-R)!
*/
#include<iostream>
using namespace std;
int factorial(int n) {
 if (n <= 1)
     return 1;
 else
     return(n*(factorial(n-1)));
}

int main(){
	int n,r;
	cout<<"ENTER n: ";
	cin>>n;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"The value of nCr is: "<<(factorial(n)/(factorial(n-r)*factorial(r)));
}
