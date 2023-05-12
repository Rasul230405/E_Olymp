// e8532.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++) {
        cout << i * i << " ";
    }
    cout << "\n";
    for (long long i = b; i >= a; i--) {
        cout << i * i * i << " ";
    }

}


