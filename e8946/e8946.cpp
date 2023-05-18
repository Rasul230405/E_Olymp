// e8946.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                if (j % 2 == 0) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        else {
            for (int j = 0; j < n; ++j) {
                if (j % 2 == 0) cout << " ";
                else cout << "*";
            }
            cout << "\n";
        }
    }
}

