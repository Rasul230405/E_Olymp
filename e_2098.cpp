

#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int* p1 = &arr[0];
    int* p2 = &arr[n - 1];
    while (!(p1 > p2)) {
        swap(*p1, *p2);
        ++p1;
        --p2;
    }

    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}


