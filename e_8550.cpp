// e_8550.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int** arr = new int* [row];

    double n = row;

    for (int i = 0; i < n; ++i) arr[i] = new int[row];

    int first_ceil = round((n * n) / 2);

    int* A = new int[first_ceil];
    int* A2 = new int[(row * row) - first_ceil];

    for (int i = 0; i < first_ceil; ++i) A[i] = i + 1;
    for (int i = 0; i < (n * n) - first_ceil; ++i) A2[i] = i + first_ceil + 1;

    int k = 0;
    int f = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) % 2 == 0) {
                arr[i][j] = A[k];
                ++k;
            }
            else {
                arr[i][j] = A2[f];
                ++f;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

