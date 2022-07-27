/*
TOWER OF HANOI: All you have to remember is that first move n-1 disks from A to B. Then move n-1 disks from B to C
*/

#include<iostream>
using namespace std;

void towerOfHanoi(int n,char source,char destination,char aux){
  if(n==0) return;
  towerOfHanoi(n-1,source,aux,destination);
  cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
  towerOfHanoi(n-1,aux,destination,source);
}

int main(){
  int n;
  cout<<"Enter the number of disks:";
  cin>>n;
  towerOfHanoi(n,'A','C','B');
}
