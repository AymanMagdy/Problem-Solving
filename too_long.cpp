// The problem's name : A. Way Too Long Words
// The problem's link : http://codeforces.com/contest/71/problem/A
#include<iostream>
#include<string>
using namespace std;
int main(){

    // Declaring the vars, and getting the 1st int value.
    int s;
    cin>>s;
    string str [s];
    string result[s];

    // The process of getting the string, then checking if it's > 10 or not 
    // If it's > 10 -> this algorithm, else put the str to the another array as what it is.
    for(int i=0; i < s; i++){
        cin>> str[i];
        if(str[i].length() > 10){
            int len = str[i].length();
            string nw = std::to_string(str[i].length()-2);
            result[i] = str[i].at(0) + nw  + str[i].at(len-1);
        }
        else{
            result[i] = str[i];
        }
    }

    // printing the array to the user.
    for(int i=0; i < s; i++){
        cout<<result[i]<<endl;
    }
}