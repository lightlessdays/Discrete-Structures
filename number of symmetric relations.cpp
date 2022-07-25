//Number of Symmetric Relations in a set is  N = 2^n(n+1)/2

#include<iostream>
#include <math.h>
using namespace std;

int numberOfSymmetricRelations(int n){
    return pow(2,(n*(n+1)/2));
}

int main(){
    int n;
    cout<<"Enter the number of elements in the relation:";
    cin>>n;
    cout<<numberOfSymmetricRelations(n);
}
