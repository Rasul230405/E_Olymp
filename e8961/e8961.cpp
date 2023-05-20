// e8961.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	int min = arr[0];
	for (int i = 0; i < n; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (arr[i] == min) {
			swap(arr[i], arr[0]);
			break;
		}
	}
	

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}


