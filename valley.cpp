// A simple c++ problem to solve counting the valley problem on hacker rank;
// Link: https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include<iostream>
#include <string>
using namespace std;
int main(){
    string str_input;
    int int_input, level=0, valley=0;

    cin >> int_input;
    cin >> str_input;

    for(int i=0; i < int_input; i++){
        if(str_input.at(i) == 'U') level++;
        if(str_input.at(i) == 'D') level--;

        // if the hicker arrived to the sea lever and the cha == U
        if (level == 0 && str_input.at(i) == 'U') valley++; 
    }

    cout << valley <<endl;
}