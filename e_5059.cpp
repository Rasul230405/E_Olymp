// e_5059.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int min = 0;
    int min2 = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) min = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] != min) {
            min2 = arr[i];
            break;
        }
        
    }
   
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min2 && arr[i] != min) min2 = arr[i];
    }

    cout << min << " " << min2 << "\n";
}

