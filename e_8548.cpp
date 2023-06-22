// e_8548.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int counter = 0;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((arr[i] + arr[j]) % k == 0) ++counter;
        }
    }
    cout << counter << "\n";
}

