// e_8530.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, row, column;
    cin >> n;

    int** arr = new int* [n];

    for (int i = 0; i < n; ++i) arr[i] = new int[n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cin >> row >> column;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

