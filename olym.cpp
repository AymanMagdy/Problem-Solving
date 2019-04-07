#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int sub_len = (int)n/3;

    int prog[sub_len];
    int math[sub_len];
    int ph[sub_len];

    for(int i=0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1) prog[i] = i;
        else if(arr[i] == 2) math[i] = i;
        else if(arr[i] == 3) ph[i] = i;
    }

    for(int i=0; i < sub_len; i++){
        cout << prog[i] << " " << math[i] << " " << ph[i] << endl;
    }
}