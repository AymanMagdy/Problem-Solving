// Problem's name : mod;
// Problem's link : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=349
#include<iostream>
using namespace std;
int main(){
    int n, x;
    string res[n];

    cin >> n >> x;

    int st1[n], st2[n];
    st1[0] = n;
    st2[0] = x;

    // Geting the input from the user.
    for(int i=1; i < n; ++i){
        cin >> st1[i];
        cin >> st2[i];
    }

    // The algorithm

    for(int j=0; j < n; ++j){
        int x;
        x = (st2[j] % st1[j])%2;
        if(x == 0) res[j] = "Good choice";
        else if(x != 0) res[j] = "Bad choice";
    }

    for(int i=0; i < n; ++i){
        cout << st1[i] << " " << st2[i] << " " << res[i] << endl;
    }
}