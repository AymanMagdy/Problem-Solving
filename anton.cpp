// The second problem, Anton and Danik.
// The problem's link : 

#include<iostream>
#include<string>
#include <cstring>

using namespace std;
int main(){

    // Intializing the variables.
    int An=0, D=0;
    int in;
    cin>>in;
    string name;
    char persons[in];
    cin>> name;

    // Checking the array of chars
    for(int i=0; i < in; i++){
      persons[i] = name.at(i);
      if(persons[i] == 'A') An++;
      else if(persons[i] == 'D') D++;
    }

     // Printing the output
    if(An > D) cout<<"Anton";
    else if(D > An) cout<<"Danik";
    else if(D == An) cout<<"Friendship";
    cout<<endl; 
    
    

    
}