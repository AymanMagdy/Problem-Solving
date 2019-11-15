// A simple c++ code to solve the diagonal difference problem on hacker rank;
// Link: https://www.hackerrank.com/challenges/diagonal-difference/problem?h_r=next-challenge&h_v=zen

#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int size, diagonal1=0, diagonal2=0;
    cin >> size;
    int arr[size][size];

    
    for(int row=0; row < size; row++){
        for(int colm=0; colm < size; colm++){
            cin >> arr[row][colm];
        }
    }

    // The sum of the 2 diagonals
    for(int row=0; row < size; row++)
        diagonal1 += arr[row][row];
    
    // Getting the sum of the second diagonal;
    for(int row=0; row < size; row++){
        for(int colm=size-1; colm >= 0; colm--){
            if(row+colm == size-1) diagonal2 += arr[row][colm];
        }
    }

    cout << abs(diagonal1 - diagonal2) << endl;

}