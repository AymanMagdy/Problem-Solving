// Problem's name : battleships
// Problem's link : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104
#include<iostream>
using namespace std;
int main(){

    // Declaring the vars, and the sum array;
    int n, x;
    cin >> n;
    int sum[n];

    // The algorithm of solving the issue;
    // Getting the number of the needed vars; and then start taking the inputs and checking the inputs;
    for(int i=0; i < n; ++i){
        sum[i]=0;
        cin >> x;
        char arr[x][x];
        // The loop to get the tree values and checking the values each and every input;
        for(int k=0; k < x; ++k){
            for(int j=0; j < x; ++j){
                cin >> arr[k][j];
                if(arr[k][j] == 'x') sum[i]++;
            }
        }
    }

    // Printing the output to the user;
    for(int i=0; i < n; i++){
        int Case=i+1;
        cout << "Case " << Case << ": " << sum[i] << endl;
    }
}