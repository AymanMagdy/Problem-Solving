#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "The legnth: ";
    cin >> n;
    int arr[n], res[n];

    // Getting the array;
    
    for(int i=1; i <= n; i++){
        cin >> arr[n];
    }

    // The solution
    arr[0]=0;
    bool result;
    for(int i=1; i <= n; i++){
        result = (arr[i] == arr[i-1]);
        res[i] = (result) ? 0 : 1;
    }

    // printing the array;
    for(int i=1; i <= n; i++){
        cout << res[i] << " ";
    }

    cout << endl;
}