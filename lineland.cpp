// The problem's name : A. Lineland Mail.
// The problem's link : http://codeforces.com/contest/567/problem/A

#include<iostream>
using namespace std;
int max1(int, int);
// the main function;
int main(){
    // Declaring the 1st input.
    int x;
    cin >> x;
    int arr[x];
    // getting the array values;
    for(int i=0; i < x; ++i){
        cin >> arr[i];
    }

    int len = (sizeof(arr) / sizeof(*arr));
    int min = arr[0], max = arr[len-1], v1, v2;

    // processing the array elements;
    for(int i=0; i < len; ++i){
        v1 = max1(abs((arr[i]) - (min)), abs((arr[i]) - (max)));
        v2 = abs((arr[i]) - (max));
        cout << v1 << " " << v2 << endl;
    }

}
// function for the max val;
int max1(int x, int y){
    if ( x > y) return x;
    else return y;
}