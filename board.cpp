// Problem's name : Chees board.
// Problem's link : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2172
#include<iostream>
using namespace std;
int main(){
    int x, y, c;

    while(cin >> x >> y >> c && x != 0){ // keep getting the number and doing the algorithm if non of them = 0;
        cout << (((x-7) * (y-7) ) + c ) / 2<< endl; 
    }
    
}