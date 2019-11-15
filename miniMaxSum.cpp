// A simple C++ program to solve the problem of the biggest and and the lowest of sum of an array;

#include<iostream>
using namespace std;
int main()
{
    // The arrays and needed values; then getting the values from the user;
    long arr[5], biggest, lowest;
    long sum[5] = {0, 0, 0, 0, 0};
    for (int c_input = 0; c_input < 5; c_input++)
        cin >> arr[c_input];

    // getting the sum of the values;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                continue;
            else
                sum[i] += arr[j];
        }
    }

    // Getting the biggest value of the sum;
    biggest = sum[0];
    for (int counter = 0; counter < 5; counter++)
    {
        if (sum[counter] > biggest)
            biggest = sum[counter];
    }

    // Getting the lowest value of the sum;
    lowest = sum[0];
    for (int counter = 0; counter < 5; counter++)
    {
        if (sum[counter] < lowest)
            lowest = sum[counter];
    }

    cout << lowest << " " << biggest;
}