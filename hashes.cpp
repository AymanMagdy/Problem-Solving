#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    string hash="#";

    for(int i=0; i < size; i++){
        cout << " " << hash << endl;
        hash+="#";
    }
        cout << endl;
}