// Problem's name : Juicer.
// Problem's link : http://codeforces.com/contest/709/problem/A.
#include<iostream>
using namespace std;
int main(){

    // Declaring the values, then creating the needed array.
    int n, b, d, sum=0, wast=0;
    cin>> n >> b >> d;
    int oranges[n];
    // Getting the array's values, and writing the needed process.
    for(int i=0; i < n; i++){
        cin>> oranges[i];
        if(oranges[i] <= b) sum+=oranges[i];
        if(sum > d){
            wast++;
            sum=0;
        }
    }

    cout<<wast<<endl;

}