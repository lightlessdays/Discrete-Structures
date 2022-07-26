#include<iostream>
using namespace std;
int fibonacci(int n){
  n-=2;
  int fm=1;
  int f=1;
  int fn=1;

  for(int i=0;i<n;i++){
    fn=f+fm;
    fm=f;
    f=fn;
  }
  return fn;
}

int main(){
    int n;
    cout<<"Enter the nth term:";
    cin>>n;
    cout<<fibonacci(n);
}
