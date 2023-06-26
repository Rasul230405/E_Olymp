// e_7849.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int min = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) max = arr[i];
    }

    min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) min = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] == min) arr[i] = max;
        else if (arr[i] == max) arr[i] = min;
    }

    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}


