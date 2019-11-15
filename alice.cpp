// A simple c++ code to solve the problem of Alice and Bob playing a game (Hacker-rank)

#include<iostream>
using namespace std;
int main(){
    // Intializing the arrays;
    int arrBob[3];
    int arrAlice[3];
    int result[2]={0,0};

    // Taking the values from the user;
    for(int counter=0; counter < 3; counter++){
        cin >> arrAlice[counter];
    }

    for(int counter=0; counter < 3; counter++){
        cin >> arrBob[counter];
    }

    // Solving the issue;
    for(int counter=0; counter < 3; counter++){
        if(arrAlice[counter] > arrBob[counter]) result[0] += 1;
        if(arrBob[counter] > arrAlice[counter]) result[1] += 1;
        if(arrAlice[counter] == arrBob[counter]);
    }

    // Printing the result;
    for(int counter=0; counter < 2; counter++)
        cout << result[counter] << " ";
    
    cout << endl;
}