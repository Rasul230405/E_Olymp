// e4101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 100; i < 1000; ++i)
	{
		int sum = 0;
		int number = i;
		while (number > 0) {
			sum += number % 10;
			number /= 10;
		}
		if (sum == n) v.push_back(i);
	}

	cout << v.size() << "\n";
	for (int num : v) cout << num << "\n";
}

