#include<iostream>
using namespace std;
int main(){
    int n, req, cnt=0;
    cout << "Enter the n : " ;
    cin >> n;
    int arr[n];

    cout << "Enter the needed array : " << endl;

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nEnter the need number to check : ";
    cin >> req;
   
    // Using for; 
    /*
    for(int i=0; i < n; i++){
        if(arr[i] == req) cnt++;
    } */

    // Using while loop;
    int b = n, i=0;
    while(i < n){
        if(arr[i] == req) cnt++;
       i++;  
    } 
    cout << "The number : " << req << " appears : " << cnt << " times." << endl;
}