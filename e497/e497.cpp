// e497.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n_test, n_days, a, b;
    vector<string>str;
    cin >> n_test;
    for (int i = 0; i < n_test; ++i)
    {
        bool s = true;
        int a2 = 0;
        int b2 = 32;
        cin >> n_days;
        for (int j = 0; j < n_days; ++j)
        {
            cin >> a >> b;
            if (b2 - a < 0 || a2 - b > 0) { 
                s = false;
                break;
            }
      
            a2 = a;
            b2 = b;
        }
        if (s) str.push_back("YES");
        else str.push_back("NO");
    }

    for (string ss : str) cout << ss << "\n";
}


