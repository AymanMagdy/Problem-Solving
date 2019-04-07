// The problem's name : Boy or girl
// The problem's link : https://codeforces.com/contest/236/problem/A

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int count=0, i;

    cin>>str;
    // Counting the number of the number would appear in the string
    for (int i = 0; i < str.size(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         // if the this is true and it appears in the string, it'll add 1 as the number shows more than once..
         if (!appears){
             count++;
         }
    }
    
    if(count %2 == 0) cout<<"CHAT WITH HER!";
    else if(count %2 != 0) cout<<"IGNORE HIM!";
    cout<<endl;
}