// e8962.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    
    int max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) max = arr[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] == max) {
            int temp = arr[n - 1];
            arr[n - 1] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}
