#include<iostream>
using namespace std;
int main(){
    int n; 
    cout << "Enter the size : " << endl;
    cin >> n;
    cout << "Enter the needed array : " << endl;
    int arr[n];

    // Getting the array from the user;
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Sorting.." << endl;

    // The algorithm of sorting.
    int temp;
    int limit = (n/2);
    for (int i=0; i < limit; i++){
        temp = arr[n-i];
        arr[n-i] = arr[i];
        arr[i] = temp;
    }

    // Printing the array;
    for(int i=0; i < n; i++){
        cout<< arr[i]; cout << " ";
    }
    cout << endl;

}