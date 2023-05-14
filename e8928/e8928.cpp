// e8928.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2;
		return 0;
	}
	else if (n % 3 == 0) {
		cout << n / 3;
		return 0;
	}
	
	else {
		for (long long i = 5; i * i <= n; i += 2) {
			if (n % i == 0) {
				cout << n / i;
				return 0;
			}
		}
		cout << 1 << "\n";
	}
}
