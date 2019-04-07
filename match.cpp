// Problem's name : Match 
// Problem's link : http://codeforces.com/contest/268/problem/A

// Simlply this problem is also like searching about the repetetion of an element in another array.

#include<iostream>
using namespace std;
int main(){
    int number, res=0;
    cin>>number;

    int home[number], guest[number];

    // Getting the numbers from the users.
    for(int i=0; i < number; i++){
        cin>>home[i]>>guest[i];
    }

    // Taking every element and searching about the element in the other array. 
    for(int i=0; i < number; i++){
        for(int j=0; j < number; j++){
            if(home[i] == guest[j]) res++;
        }
    }

    cout<<res<<endl;
}