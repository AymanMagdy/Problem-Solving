// The problem's name : Team
// The problem's link : https://codeforces.com/contest/231/problem/A

#include<iostream>
using namespace std;

int main(){
    // intializing the values;
    int x, y, z, input, decision =0;
    cin>>input;

    // Getting the values;
    for(int i=0; i < input; i++){
        cin>>x; cout<<" "; cin>>y; cout<<" "; cin>>z; cout<<" ";
        decision += (x+y+z >= 2); // if the sum of the 3 vars >= 2;
    }

    cout<<decision << endl;
}