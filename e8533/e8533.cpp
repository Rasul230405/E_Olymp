// e8533.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
        int c = i % 10;
        int d = i / 10 % 10;
        int e = i / 100 % 10;
        int f = i / 1000;
        if (c != d && c != e && c != f && d != e && d != f && e != f) cout << i << " ";
    }
}

