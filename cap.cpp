// The problem's name : Word Capitalization
// The problem's link : https://codeforces.com/contest/281/problem/A.

#include <string>
#include<iostream>
using namespace std;
int main(){
    string str, out;

    cin>>str;
    char x = str.at(0);

    // checking if the 1st element isn't upper, then change it to be upper char.
    if(!isupper(x)){
        char n = toupper(x);
        str.at(0) = n;
    }

    cout<<str<<endl;
}