// e_7845.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    int prev = arr[0];
    int counter = 0;
    for (int i = 2; i < n; ++i) {
        if (arr[i - 1] > prev && arr[i - 1] > arr[i]) ++counter;
        prev = arr[i - 1];
    }

    cout << counter << "\n";
}


