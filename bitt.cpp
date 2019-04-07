// Problem's name : Bit++;
// Problem's link : http://codeforces.com/contest/282/problem/A
#include<iostream>
using namespace std;
int main(){
    // Declaring the vars and getting the inputs from the user;
    int x, res=0;
    cin >> x;
    string st[x];

    // getting the result;
    for(int i=0; i < x; ++i){
        cin >> st[i];
        if(st[i].at(1) == '+') res++;
        else if (st[i].at(1) == '-') res--;   
    }
    cout << res << endl;
}