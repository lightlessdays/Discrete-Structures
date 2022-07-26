/*
Write a Program to create a SET A and determine the cardinality of SET for an input array of elements (repetition allowed) and perform the following operations on the SET:
a) ismember (a, A): checkwhether an element belongs to set or not and return value as true/false.
b) powerset(A): list all the elements of power set of A.
*/
#include<iostream>
using namespace std;
bool isMember(int element,int arr[]){
  for(int i=0;i<sizeof(arr);i++){
    if(arr[i]==element) return true;
  }
  return false;
}

int main(){
  int arr[]={2,3,4,5,6};
  cout<<isMember(7,arr);
}
