// Police Recruits
// link : https://codeforces.com/contest/427/problem/A
// ** FAILED **
#include<iostream>
using namespace std;
int main(){
    int x, hired=0, untereated=0;
    cin >> x;
    int arr[x];

    for(int i=0; i < x; i++){
        cin>> arr[i];
    }

    for(int i=0; i < x; i++){
        if(arr[i] > 0) hired += i;
        if(hired > 0 && arr[i] < 0) hired -= 1;
        if(arr[i] < 0) untereated += 1; 
    }
    
    cout<<untereated <<endl;
}