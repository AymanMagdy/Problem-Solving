// The problem's name : Bear and Big Brother
// The problem's link : https://codeforces.com/contest/791/problem/A

#include<iostream>
using namespace std;
int main()
{
    // Intializing the vars, and getting the vlaues.
    int a, l, c=0;
    cin>> a >> l;
    
    // The process and getting the result.
    while(a <= l){
        a*=3;
        l*=2;
        c++;
        if(a > l){
            cout<< c << endl;
            break;
        }
        

    }
}
