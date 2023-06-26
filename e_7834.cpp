// e_7834.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int max2 = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] != max) {
            max2 = arr[i];
            break;
        }
        max2 = max;
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max2 && arr[i] != max) max2 = arr[i];
    }

    cout << max + max2 << "\n";
}

