// Problem's name : Snacktower.
// Problem's link : http://codeforces.com/problemset/problem/767/A

/*
 - The applied solution didn't work.
 - My solution was ->  Getting the elements in descending oder.
 - Start to check the elements from the highest element with the loop's ith ( as per the elements should be sorted in the ith place)
*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[x];

    // Getting the results in descending order.
    for(int i=x; i > 0; --i) cin >> arr[i]; 

    for(int i=x; i > 0; --i){
        if(arr[i] <= i) cout << endl;
        else if(arr[i] > i){
            for(int k=i; k <= arr[i]; ++i){
                cout << arr[k] << " ";
            }
        }
    }
    cout << endl;

}