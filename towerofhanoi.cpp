#include <iostream>

using namespace std;

void TowerOfHanoi(int n,char source,char midman,char destination){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }
    TowerOfHanoi(n-1,source,destination,midman);
    cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	TowerOfHanoi(n-1,midman,source,destination);
}

int main(){
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
    return 0;
}
