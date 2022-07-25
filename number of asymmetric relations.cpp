//Number of Asymmetric Relations in a set is 3(N2 – N)/2

#include<iostream>
#include <math.h>
using namespace std;

int numberOfAsymmetricRelations(int n){
    return pow(3,(((pow(n,2))-n)/2));
}

int main(){
    int n;
    cout<<"Enter the number of elements in the relation:";
    cin>>n;
    cout<<numberOfAsymmetricRelations(n);
}
