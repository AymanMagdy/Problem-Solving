// ** Failed **
// Problem's name : Night at the Museum
// Problem's link : http://codeforces.com/contest/731/problem/A

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int len=s.length();
    int smoves=0;
    int strt=0;

    // The algorithm of getting the result;
    for(int i=0; i < len; i++){
        int index=s[i] - 97;
        int walk = abs(strt-index);

        if(walk < 13) smoves += walk;
        else smoves += 26-walk;

        strt = index;
    }

    cout<<smoves;
    
    /* */
}