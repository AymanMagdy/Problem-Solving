// The second problem, Anton and Danik.
// The problem's link : 

// FALIED
#include<iostream>
#include<sstream>
#include <string> 
using namespace std;
int main(){
    int arr[4], res=0;
    for(int i=0; i < 4; i++) cin >> arr[i];

    string str;
    cin>> str;

    int s[str.size()];
    stringstream k(str);

    for(int i=0; i < str.size(); i++) cout << k[i] << " ";

    


    
}