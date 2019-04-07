// Problem's name : Young Physicist
// Problem's link : http://codeforces.com/contest/69/problem/A
#include<iostream>
using namespace std;
int main(){
    // Declaring the arrays and their sums;
    int n, res=0, sum_x=0, sum_y=0, sum_z=0;
    cin >> n;
    int x[n], y[n], z[n];

    // Getting the the axis from the user, and calculating the results;
    for(int i=0; i < n; ++i){
        cin >> x[i] >> y[i] >> z[i];
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    }

    // printing the result;
    if(sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES";
    else cout << "NO";

    cout << endl;

}