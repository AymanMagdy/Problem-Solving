#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the n : ";
    cin >> n;

    // Declaring the arrays;
    int arr1[n], arr2[n];
    for(int i=0; i < n; i++){
        cin >> arr1[i];
    }

    cout << "Done taking the arrays.";

    // The algorithm of solving the problem;
    if(n %2 == 0){
        for(int i=0; i < n; i++){
            arr2[i] = 0;
        }
    }
    else{
        for(int i=0; i < n; i++){
            arr2[i] = 1;
        }
    }


    // printing the result;
    cout << endl;
    for(int i=0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}