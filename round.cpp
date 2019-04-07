// Problem's name : Next Round.
// Problem's link : http://codeforces.com/contest/158/problem/A
#include<iostream>
using namespace std;
int main(){

    // getting the the number of the users and the hightst score.
    int n, x, res=0;
    cin >> n >> x;
    int arr[n];

    int con = arr[x-1];

    // getting the scores of the users and compare it to the needed score to go to next round.
    for(int i=0; i < x; ++i){
        cin >> arr[i];
    }

    for(int i=0; i < n; ++i){
        if(arr[i] >= con && arr[i] > 0) res++;
    }

    cout << res << endl;
}