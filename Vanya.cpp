// The 1st problem,  Vanya and Fence
// Problem's link : https://codeforces.com/contest/677/problem/A

#include<iostream>
using namespace std;
int main()

{
    // Getting and storing the values.
   int legnth, h, result=0;
   cin>> legnth >> h;
   int persons[legnth];

   // the process of calculaing;
   for(int i=0; i < legnth; i++){
       cin>>persons[i];
       if(persons[i] <= h) result+=1;
       else result+=2;
   }

   cout<<result<<endl;

}