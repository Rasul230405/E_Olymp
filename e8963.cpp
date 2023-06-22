// e8963.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, numOfMin = 0;
    cin >> n;
    int* arr = new int[n];
    int* arr2 = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    int min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) min = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] == min) ++numOfMin;
    }

    for (int i = 0; i < numOfMin; ++i)
        arr2[i] = min;
  
    int j = 0;
    while (j < n) {
        if (arr[j] != min) {
            arr2[numOfMin] = arr[j];
            ++numOfMin;
        }
        ++j;
    }

    for (int i = 0; i < n; ++i) cout << arr2[i] << " ";
}

