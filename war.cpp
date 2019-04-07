// Problem's name : 352 - The Seasonal War ** Didn't work **
// Problem's link : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=288
#include <iostream>
#include <vector>
using namespace std;

// The function that checks with the elements
int checker(vector<int> vec){
    int len = vec.size();
    int sum = 0;
    // loop to check with the elemnts, takes the 1st element's position if it contains 1; then check the next one's (position+1 and position-1);
    for (int i = 0; i < len; ++i){
        if (vec.at(i) == 1){
            for (int j = i+1; j < len; ++j){
                if (vec.at(j) == 1 || vec.at(j - 2) == 1)
                    ++sum;
            }
        }
        continue;
    }
    return sum;
}

int main(){
    int x, ele = 0;

    while (true){
        cin >> x;

        if (x < 1)
            break;

        else{
            ele++;
            vector<int> vec(x);
            for (int i = 0; i < x; ++i){
                cin >> vec[i];
            }

            // Sending to the function and getting the result;
            int arr[ele];
            for (int i = 0; i < ele; ++i){
                arr[i] = checker(vec);
            }
        }
    }
}