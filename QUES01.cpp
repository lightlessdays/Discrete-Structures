/* Write a Program to create a SET A and determine the cardinality of SET for an input array of elements (repetition allowed) and perform the following operations on the SET: a) ismember (a, A): checkwhether an element belongs to set or not and return value as true/false. b) powerset(A): list all the elements of power set of A. */ 
#include<iostream> 
#include<math.h>
using namespace std; 
bool isMember(int element,int arr[],int n){ 
    for(int i=0;i<n;i++){ 
        if(arr[i]==element) return true; 
    }
    return false; 
} 

void powerSet(int arr[], int n){    
    int snum = 0;
    cout<<"{";
    while(snum<pow(2,n)){
        cout<<"{";
        for(int i=0;i<n;++i){
            // the following condition checks
            // if the ith bit of snum in binary form
            // is 1 or not
            if((snum&(1<<i))!=0){
                cout<<arr[i]<<',';
            }
        }
        cout<<"},";
        ++snum;
    }
    cout<<"}";
            
}

int main(){ 
    int n; 
    cout<<"Enter the number of elements: "; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
        cout<<"Enter element number "<<i+1<<": "; 
        cin>>arr[i]; 
    } 
    cout<<"The set is: "<<"{"; 
    for(int i=0;i<n-1;i++){ 
        cout<<arr[i]<<","; 
        
    } 
    cout<<arr[n-1]<<"}"<<endl; 
    while(true){ 
        int m; 
        cout<<"Enter 1 to check element in set. Enter 2 to generate power set. Enter anything else to exit."<<endl;
        cin>>m;
        if(m==1){ 
            cout<<"Enter element to search: ";  
            cout<<isMember(m,arr,n)<<endl; 
        } else if(m==2){
            powerSet(arr,n);
            } 
        else return 0;
        
    } 
    
}
