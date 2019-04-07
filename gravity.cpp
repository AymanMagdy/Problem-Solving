// The problem's name : Gravity flip.
// The problem's link : https://codeforces.com/contest/405/problem/A.

#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int x[n];

    for(int i=0; i < n; i++) cin>>x[i];

    sort(x, x+n); // the sorting algorithm, from the C++ STL

    for(int i=0; i < n; i++) cout<<x[i]<<" ";

    cout<<endl;
}