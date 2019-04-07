#include<iostream>
using namespace std;
int main(){

    // Declaring the person's keyboard; Then the vars we gonna use and get the vars from the user;
    string str1 = "qwertyuiop", str2 = "asdfghjkl;", str3 = "zxcvbnm,./", str_in;
    char chr;
    cin >> chr;
    cin >> str_in;
    int len = str_in.length();

    // A loop with the legnth of the entered string by the user;
    // Decide which way to go throught [R or L]; then in every way searching about the char in the string; then store the needed element in the res array;
    for(int i=0; i < len; i++){
        // Working with the right side;
        if(chr == 'R'){
            for(int k=0; k < 10; ++k){
                if(str_in.at(i) == str1.at(k)){
                    cout << str1.at(--k);
                    break;
                } else if(str_in.at(i) == str2.at(k)){
                    cout << str2.at(--k);
                    break;
                } else if(str_in.at(i) == str3.at(k)){
                    cout << str3.at(--k);
                    break;
                }
            }
            // Working with the left side;
        } else if(chr == 'L'){
            for(int k=0; k < 10; ++k){
                if(str_in.at(i) == str1.at(k)){
                    cout << str1.at(++k);
                    break;
                } else if(str_in.at(i) == str2.at(k)){
                    cout << str2.at(++k);
                    break;
                } else if(str_in.at(i) == str3.at(k)){
                    cout << str3.at(++k);
                    break;
                }
            }
        }
    }
}