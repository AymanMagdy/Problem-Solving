// The problem's name : Magnets
// The problem's link : https://codeforces.com/contest/344/problem/A

#include<iostream>
using namespace std;
int main(){

    // The variables
    int counter=0, size;
    cin >> size;
    int array[size];

    // Gettin the values from the user.
    for(int i=0; i<size; i++){
        cin>> array[i];
    }

    // Getting the result
    for(int i=0; i<size; i++){
        if(array[i] != array[i+1]){
            counter++;
        }
    }

    cout<<counter << endl;
    
}