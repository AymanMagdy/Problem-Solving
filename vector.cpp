#include<iostream>
#include<vector>
using namespace std;

// Printint a vector
void print_vector(vector<int> vec){
    for(int i=0; i < vec.size(); ++i){
        cout << vec[i] << ", ";
    }
}

int main(){
    int n;
    cin >> n;
    // Declaring the vector;
    vector<int> vec1(n);
    // taking the vector's from the user;
    for(int i=0; i < vec1.size(); ++i){
        cin >> vec1[i];
    }

    // Calling the function that have created to print the elements;
    print_vector(vec1);

}