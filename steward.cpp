#include<iostream>
// Problem's name : Oath of the Night's Watch
// Problem's link : http://codeforces.com/contest/768/problem/A
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[x];
    // Getting the values from the users.
    for(int i=0; i < x; ++i) cin >> arr[i];

    // Assigning the max and the min values;
    int mini=arr[0], max=arr[x-1], steward=0;

    // Checking the supported stewards;
    for(int i=1; i < x-1; ++i)
        if(arr[i] < max || arr[i] > mini) ++steward;

    cout << x-2 << endl;
}