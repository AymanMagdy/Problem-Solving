// The problem's name : Free Ice Cream
// The problem's link : http://codeforces.com/contest/686/problem/A

#include<iostream>
using namespace std;
int main(){
    long n, x, sum=0, destress=0;
    cin >> n >> x;
    sum+=x;

    // Getting the sign and integer, and restoring them into arrays.
    long arr[n];
    string sign[n];
    for(int i=0; i < n; i++){
        cin>>sign[i];
        cin>>arr[i];
    }

    // Performing the algorithm.
    for(int i=0; i < n; i++){
        if(sign[i] == "+") sum+=arr[i]; // if the sign is + -> take the packs from the driver.
        else if(sign[i] == "-"){        // if the sign is - -> (check if there's enough packs in the stock, if yes -> give to the child what 
            if(sum >= arr[i]) sum-=arr[i]; // what he asks for, else if the availble is < the needed packs -> add 1 to the destressed kids.
            else if(sum < arr[i]) ++destress;
            else continue;
        }
        else continue;
    }

    cout<<sum<< " " << destress <<endl;

}
