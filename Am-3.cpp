#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the n : " ; cin >> n;
    int arr[n];

    // Getting the array from the user;
    for (int i=0; i < n; i++){
        cin >> arr[i];
    }

    // The algorithm to sort the array;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}