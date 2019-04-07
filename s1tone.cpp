// The problem name : Stones on the tanble.
// The problem's link : http://codeforces.com/contest/266/problem/A
#include<iostream>
using namespace std;

int main(){
    int s, count=0;
    cin>>s;
    string x;
    cin>>x;

    for(int i=0; i < x.length()-1; i++) if(x.at(i) == x.at(i+1)) count++;

    cout<<count<<endl;

   

    
    
}