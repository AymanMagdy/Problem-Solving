// The problem's name : A word.
// The problem's link : https://codeforces.com/contest/59/problem/A.

#include<iostream>
#include <string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    string str;
    int lower=0, upper=0;

    cin>>str;

    // Getting to know the lower and the upper casses of the values..
    for(int i=0; i < str.size(); i++){
        if(isupper(str.at(i))) upper++;
        else if(islower(str.at(i))) lower++;
    }

    // Checking the output, either lower or upper and then printing the appropriate one.
    if(lower > upper){
        transform(str.begin(), str.end(), str.begin(),::tolower);
        cout<< str <<endl;
    } 
    else if(upper > lower){
        transform(str.begin(), str.end(), str.begin(),::toupper);
        cout<< str <<endl;
    } 
    else if(lower == upper){
        transform(str.begin(), str.end(), str.begin(),::tolower);
        cout<< str <<endl;
    } 

}