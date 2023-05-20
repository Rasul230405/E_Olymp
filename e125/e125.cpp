// e125.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    if (s2 - s1 < 0) {
        s3 = 60 - abs(s2 - s1);
        --m2;
    }
    else {
        s3 = s2 - s1;
    }

    if (m2 - m1 < 0) {
        m3 = 60 - abs(m2 - m1);
        --h2;
    }
    else {
        m3 = m2 - m1;
    }

    h3 = h2 - h1;

    cout << h3 << " " << m3 << " " << s3 << "\n";
}


