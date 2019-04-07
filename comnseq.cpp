// Problem's name : A. Mahmoud and Longest Uncommon Subsequence.
// Problem's link : http://codeforces.com/contest/766/problem/A

#include<iostream>
using namespace std;
int main(){

    // Getting the string;
    string str1, str2;
    cin >> str1 >> str2;

    // checking the sequence;
    if(str1 != str2){
        int len1 = str1.length();
        int len2 = str2.length();

        if(len1 > len2) cout << len1 << endl;
        else cout << len2 << endl;
    } else cout << "-1" << endl;
    
}