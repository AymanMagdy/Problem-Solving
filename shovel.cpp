// The problem's name : Shovel
// The problem's link : http://codeforces.com/contest/732/problem/A

#include<iostream>
using namespace std;
int main(){
    int k, r, sum=1;
    cin>>k>>r;

    while(true){
        // if the mutplying's 1st digit equals to the givin r || equals to 0;
        // or if(bill+=k%10) == r || (bill+=k%10) == 0;
        if((k*sum%10) == r || (k*sum%10) == 0){
            cout<<sum<<endl;
            return 0;
        }
        ++sum;

        
    }
    
}