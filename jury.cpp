// Problem's name : Black Square;
// Problem's link : http://codeforces.com/contest/431/problem/A

#include<iostream>
#include<string>
using namespace std;
int main(){
    int mean[4], k=0, result=0;
    for(int i=0; i < 4; i++) cin>>mean[i]; // taking the integer numbers from the user.

    string values;
    cin>> values;
    int fin[values.size()];
    
    // putting the string into an array of integers.
    for(int i=0; i < values.length(); i++){ 
        fin[i] = values[i] - '0';
    }

    // Algorithm of adding the numbers in a specific sequence.
    for(int i=0; i < values.length(); i++){
        k = fin[i];
        result+=mean[k-1];
    }
    

    cout<<result<<endl;
}