#include<iostream>
#include<math.h>
using namespace std;

/* declare structure for polynomial */
struct poly
{
 int coeff;
 int expo;
};

/* function prototypes */
int readPoly(struct poly []);
void displayPoly( struct poly [],int terms);
int eval(int n1,struct poly []);

int main()
{
 int n1;
 int value;
 struct poly p1[20];


 cout<<"\n Enter the polynomial details:";
 n1=readPoly(p1);
 cout<<"\n  The polynomial is: ";
 displayPoly(p1,n1);
 value=eval(n1,p1);
 cout<<"\n The Resultant value of the polynomial is:"<<value<<endl;

 return 0;
}
int readPoly(struct poly p[])
{
int t1,i;

cout<<"\n Enter the total number of terms in the polynomial: ";
cin>>t1;
cout<<"\n Enter the COEFFICIENT and EXPONENT "<<endl;
for(i=0;i<t1;i++)
{
	cout<<"  Enter the Coefficient("<<i+1<<"):";
	cin>>p[i].coeff;
	cout<<"     Enter the Exponent("<<i+1<<"):";
	cin>>p[i].expo;
}
return(t1);
}

void displayPoly(struct poly p[10],int term)
{
 int k;

 for(k=0;k<term-1;k++)
	cout<<p[k].coeff<<"(x^"<<p[k].expo<<")+";
 cout<<p[k].coeff<<"(x^"<<p[k].expo<<")";
}

int eval(int n1,struct poly p1[])
{
 int i,sum,x;
 cout<<"\n\n Enter the value of x for evaluation: ";
 cin>>x;
 sum=0;
 for(i=0;i<n1;i++)
 sum=sum + p1[i].coeff*pow(x,p1[i].expo);
 return(sum);
}
