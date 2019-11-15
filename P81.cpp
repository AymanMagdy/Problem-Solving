/// the problem's link : http://codeforces.com/contest/584/problem/A
#include<iostream>
using namespace std;
int main(){

    // Getting the numbers.
    int n, t;
    cin >> n >> t;

    // Getting the digits. (The start point and the end point)
    double sum1=1, sum2;
    for(int i=1; i <= n; i++){
        sum1*=10;
    }
    sum2 = sum1/10;

    // Getting the needed number by checking if it;s divisible by the (t) number
    for(long i=sum2; i < sum1-1; i++){
        if(i % t == 0){ // If the number being founded print it and stop the prog.
            cout << i << endl;
            return 0;
        }
    }

    // If the number has been not fount print -1;
    cout << -1 ; 
    
}