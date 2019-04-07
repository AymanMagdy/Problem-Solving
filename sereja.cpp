// FAILED..

#include<iostream>
using namespace std;
int main(){
    // The vars and getting the array;
    int size, D=0, S=0;
    bool p=true;
    cin >> size;
    int array[size];

    // Filling the array;
    for(int i=0; i<size; i++){
        cin>> array[i];
    }

    int l=0, r=size-1;
    
    while(l<=r){
        if(array[l] >= array[r]){
            if(p) S+=array[l];
            else D+= array[l];
            l++;
        }
        
        else if(array[size] >= array[l]){
            if(p) S+=array[r];
            else D+=array[r];
            r--;
        }

        if(p) p = false;
        else p = true;
    }

    cout<< S << " " << D <<endl;
}