/* LOGIC USED: 
 A string of length n has n! permutation. 
 Below are the permutations of string ABC. 
ABC ACB BAC BCA CBA CAB

PERMUTATION WITH DUPLICATES ALLOWED...
*/

#include <bits/stdc++.h> 
using namespace std; 

void permute(string a,int startIndex,int endIndex){
     // Base case 
    if (startIndex == endIndex) 
        cout<<a<<endl; 
    else
    { 
        // Permutations made 
        for (int i = startIndex; i <= endIndex; i++) 
        { 
  
            // Swapping done 
            swap(a[startIndex], a[i]); 
  
            // Recursion called 
            permute(a, startIndex+1, endIndex); 
  
            //backtrack . BACKTRACKING SEEKH LENI CHAHIYE THI. CRY AARA H.
            swap(a[startIndex], a[i]); 
        } 
    } 
}

int main(){
  string a="";
  cout<<"Enter the string:";
  cin>>a;
  int n=a.size();
  permute(a,0,n-1);
  return 0;
}
