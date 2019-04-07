// The problem's name : A. Is your horseshoe on the other hoof?
// The problem's link : http://codeforces.com/contest/228/problem/A
// ** FAILED

#include<iostream>
using namespace std;
int main(){
    int arr[4], diff=0;
    for(int i=0; i < 4; i++) cin>>arr[i];

    // The proces of getting the result.
    for(int i=0; i < 4; i++){
        int x=arr[i];
        for(int j=0; j < 4; j++){
            if( i == j && arr[i] == arr[j])
                diff++;
        }
    }   

    cout<<diff<<endl;
}