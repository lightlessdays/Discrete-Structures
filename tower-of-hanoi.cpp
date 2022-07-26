#include <iostream>

using namespace std;

// towerofhanoi takes three arguments- the first argument is the source, which is the place from where we have to move the disk.
// the second is the midman or the auxilary pipe.
// the third is the destination where we have to transfer the disk.
// n is the number of disks
void TowerOfHanoi(int n, char source, char midman, char destination)
{
    // if there is only one disk, then we will directly move it to the destination and end the function.
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    // if there is more than one disk, we will call a recursive function. we will reduce the value of n and call towerofhanoi function. this time our destination would be midman. now what would happen is suppose there are four disks- 1,2,3,4. There would be three disks then- 1,2,3. then the function would be called again and again, until there is only one disk- 1. this disk would be transferred to C. Then we will exit this function. towerofhanoi would be called again. this time, the third one where our midman would be the source and destination would be destination and our source would be midman.
    TowerOfHanoi(n - 1, source, destination, midman);
    cout << "Move Disk " << n << " from " << source << " to " << destination << endl;
    TowerOfHanoi(n - 1, midman, source, destination);
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
