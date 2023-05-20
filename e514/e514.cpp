// e514.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;

void format(int h, int m, int s, char c1, char c2)
{
    string str;
    stringstream ss;
    if (h < 10) ss << c1 << h << c2;
    else ss << h << c2;
    if (m < 10) ss << c1 << m << c2;
    else ss << m << c2;
    if (s < 10) ss << c1 << s;
    else ss << m;
    ss >> str;
    cout << str << "\n";
}

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3;
    char c1, c2, c3, c4;
    cin >> h1 >> c1 >> m1 >> c2 >> s1 >> h2 >> c3 >> m2 >> c4 >> s2;
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
    format(h3, m3, s3, '0', ':');
   
}
