#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    // getting the array from the userl;
    for(int i=0; i < n; ++i){
        cin >> arr[i];
    }

    sort(arr, arr+n); // sorting the array;

    // The process of getting the solution.
    string res = "NO";
    for(int i=n; i >= 3; --i){
        if(arr[i-1]+arr[i-2] > arr[i-3] && arr[i-1]+arr[i-3] > arr[i-2] && arr[i-2]+arr[i-3] > arr[i-1])
        res = "YES";
    }

    cout << res << endl;
}