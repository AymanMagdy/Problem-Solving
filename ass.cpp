// assignment of a video found online..
#include<iostream>
using namespace std;
int main(){
    // Declaring the array of numbers and the len;
    int arr[4] = {2,3,8,10}, cnt=0;
    int len = sizeof(arr) / sizeof(*arr);

    // Searching in the  array on the numbers are divisible on 2,3,8,10
    for (int i=1; i <= 100; ++i){
        for(int j=0; j < len; ++j){
            if( arr[j]%i == 0) ++cnt;
        }
    }

    cout << "The answer : " << 100-cnt << endl;
}