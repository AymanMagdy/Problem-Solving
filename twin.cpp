// Problem's name : Twins
// Problem's link : http://codeforces.com/contest/160/problem/A
#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cin >> n;
    int arr[n];

    // Getting the values from the user.
    for(int i=1; i <= n; ++i){
        cin >> arr[i];
        sum+=arr[i];
    }
    

    // Sorting the array and then devide it;
    for(int i=1; i <= n; ++i){
        for(int s=0; s < n; ++s){
            int temp;
            if(arr[s] < arr[i]){
                temp = arr[s];
                arr[s] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // The process of getting the values, sum1[i] and then the rest of the array sum[k], until sum1 get greater than sum2
    int max1=0, max2=0;
    for(int i=1; i <= n+1; ++i){
        max1 += arr[i];
        for(int k=i+1; k <= n+1; ++k){
            max2 += arr[k];
        }

        if(max1 > max2){
            cout << i << endl;
            break;
        } else max2=0;;
    }
}