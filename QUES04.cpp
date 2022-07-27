#include<iostream>
using namespace std;

bool isSymmetric(int arr[][2],int n){
    for(int i=0;i<n;i++){
        if(arr[i][0]!=arr[i][1]) return false;
    }
    return true;
}

bool isReflexive(int arr[][2],int n){
    for(int i=0;i<n;i++){
        if(arr[i][0]==arr[i][1]) continue;
        else{
            int ele=0;
            int pop=arr[i][0];
            for(int i=0;i<n;i++){
                if(arr[i][0]==pop && arr[i][1]==arr[i][0]){
                    ele++;
                }else continue;
            }
            if(ele==0) return false;
        }
    }
    return true;
}

bool isTransitive(int arr[][2], int n){
    for(int i=0;i<n;i++){
        
        int elementOne=arr[i][0];
        int elementTwo=arr[i][1];
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                int posetFalse=1;
                if(arr[j][0]==elementTwo){
                    int elementThree=arr[j][1];
                    for(int k=0;k<n;k++){
                        if(arr[k][0]==elementOne && arr[k][0]==elementThree){
                            posetFalse=0;
                            break;
                        }
                        else continue;
                    }
                    if(posetFalse==1) return false;
                }
            }
        }
    }
    
    return true;
}

void isEquivalence(int arr[][2],int n){
    if(isSymmetric(arr,n) && isReflexive(arr,n) && isTransitive(arr,n)){
        cout<<"It is an equivalence relation";
    }
    else{
        cout<<"It is not an equivalence relation.";
    }
}

void isPoset(int arr[][2],int n){
    if(!isSymmetric(arr,n) && isReflexive(arr,n) && isTransitive(arr,n)){
        cout<<"It is a partial order relation";
    }
    else{
        cout<<"It is not a partial order relation.";
    }
}



int main(){
    int m,o;
    cout<<"Enter the number of members in relation:";
    cin>>o;
    int relation[m][2];
    for(int i=0;i<o;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter the "<<(i+1)<<"x"<<(j+1)<<" element: ";
            cin>>m;
            relation[i][j]=m;
        }
    }
    cout<<"The relation is: {";
    for(int i=0;i<o;i++){
        cout<<"(";
        for(int j=0;j<2;j++){
            cout<<relation[i][j]<<",";
        }
        cout<<"),";
    }
    cout<<"}"<<endl;
    isEquivalence(relation,o);
    cout<<endl;
    isPoset(relation,o);
    return 0;
}
