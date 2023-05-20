// e2370.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    if (n > 199) {
        cout << 0;
        return 0;
    }
    for (int i = 1; i < 100; ++i) {
        for (int j = 1; j < 100; ++j) {
            if (n - (i + j) == 0)
                ++count;
        }
    }
    cout << count << "\n";
}

