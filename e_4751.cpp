// e_4751.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; ++i) arr[i] = new int[n];

    int sum_main = 0;
    int sum_sec = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n;  ++j) {
            if (i == j) sum_main += arr[i][j];
            if ((i + j) + 1 == n) sum_sec += arr[i][j];
        }
    }

    cout << sum_main << " " << sum_sec << "\n";


}

