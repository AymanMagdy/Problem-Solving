// The problem's name : Beautiful Matrix.
// The problem's link : https://codeforces.com/contest/263/problem/A

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[5][5], res;
    
    // Filling the matrix with the values..
    for(int i=1; i <= 5; i++){
        for(int k=1; k <= 5; k++){
            cin>>x[i][k];
            if(x[i][k] == 1) // When getting the 1 value..
                res = abs(i-3) + abs(k-3); // it should've done this way, but IDK what's going on here.
                break;
        }
    }
    cout<< res << endl;
}
    
