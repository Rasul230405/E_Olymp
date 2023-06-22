// e_8524.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; ++i) arr[i] = new int[n];

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] >= 0) sum += arr[i][j];
        }
    }

    cout << sum << "\n";
}

