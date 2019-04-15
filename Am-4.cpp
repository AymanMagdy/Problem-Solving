#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the grade: ";
    cin >> n;

    // The algorithm of solving the problem;
    if(n >= 91){
        cout << "A+";
    } 
    else {
        if (n >= 85){
            cout << "A";
        }
        else if(n >= 75){
            cout << "B+";
        }
        else if(n >= 65){
            cout << "B";
        }
        else if(n >= 50){
            cout << "C";
        }
        else {
            cout << "F";
        }
    }
    cout << endl;
}