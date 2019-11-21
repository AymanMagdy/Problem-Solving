#include<iostream>
using namespace std;
int main(){
    int number, step=0;
    cin >> number;
    int arr[number];

    for(int i=0; i < number;i++){
        cin >> arr[i];
    }

    for(int i=0; i < number;i++){
        if(i+2 < number && arr[i+2] != 1){
            step++;
            i = i + 2;
        }
        else {
            step++;
            i++;
        }
        
    }

    cout << step << endl;

}