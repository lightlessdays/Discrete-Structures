/* LOGIC USED: 
 A string of length n has n! permutation. 
 Below are the permutations of string ABC. 
ABC ACB BAC BCA CBA CAB

PERMUTATION WITH DUPLICATES ALLOWED...
*/

#include <bits/stdc++.h> 
using namespace std; 



int main(){
  string a;
  cout<<"Enter the string:";
  cin>>a;
  permute(a,0,n-1);
  return 0;
}
