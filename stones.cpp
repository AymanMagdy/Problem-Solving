// The problem's name :  Colorful Stones (Simplified Edition)
// The problem's lnik : http://codeforces.com/contest/265/problem/A

#include<iostream>
using namespace std;
int main(){
    string str, instruction;
    int ans=0;
    cin>>str;
    cin>>instruction;

    // The process of getting the answer.
    int len = str.length();
    for(int i=0; i < instruction.length(); i++){
        // If the second_input[i] matches the first_input[ans] ans++ and move.
        if(instruction[i] == str[ans]) ans++;
    }

    cout<<ans+1<<endl;
}