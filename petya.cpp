// The problem's name : Pyta and the gift
// The problem's link : https://codeforces.com/contest/112/problem/A 
// This problem has been resolved in java

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string string1, string2;
    int res1=0, res2=0;

    // Getting the strings from the user..
    cin>>string1; 
    cin>>string2;

     

    // doing the calculaition to know which one is the larger.
    if(string1 < string2) cout<<"-1" << endl;
    else if(string1 < string2) cout<<"1" << endl;
    else if(string2 == string1) cout<<"0" <<endl;
}