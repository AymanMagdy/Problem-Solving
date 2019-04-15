// Selection sort algortihm;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "The length: ";
    cin >> n;
    int arr[n];

    // Gettig the array
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    // The algorithm;
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printint the array
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}