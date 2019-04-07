// The second problem, colour on the table.
// The problem's link : https://codeforces.com/contest/266/problem/A
#include<iostream>
using namespace std;
int main(){
    // The needed values
    int c=0, leg;
    string str;
    cin >> leg;
    cin >> str;

    // Getting the result
    for(int i=0; i < leg-1; i++){
        if(str.at(i) == str.at(i+1)) c++;
    }

    cout<< c << endl;


}