// e_2238.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, avr;
    int sum = 0;
    int counter = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    avr = sum / n;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > avr) ++counter;
    }

    cout << counter << "\n";
}


