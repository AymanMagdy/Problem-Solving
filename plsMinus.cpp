// A simple C++ program to solve the plus minus problem on hacker rank
// Link: https://www.hackerrank.com/challenges/plus-minus/problem?h_r=next-challenge&h_v=zen

#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
    // Getting the input and declaring the vars;
    int input;
    float p_output, n_output, z_output, f_input = float(input), positive=0, negative=0, zero=0;
    cin >> input;
    int arr[input];

    // taking the input from the user and processing the algorithm
    for(int counter=0; counter < input; counter++){
        cin >> arr[counter];
        if(arr[counter] == 0) zero++;
        else if(arr[counter] < 0) negative++;
        else if(arr[counter] > 0) positive++;
    }

    p_output = positive / input;
    n_output = negative / input;
    z_output = zero / input;

    cout <<fixed<<setprecision(6)<<p_output << endl;
    cout <<fixed<<setprecision(6)<<n_output << endl;
    cout <<fixed<<setprecision(6)<<z_output << endl;

}