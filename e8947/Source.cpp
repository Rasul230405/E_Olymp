#include <iostream>
using namespace std;

int main()
{
    int n;
    bool end = true;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                cout << "*";
            }
        }
       
        else {
            for (int j = 0; j < n - 1; ++j) {
                cout << " ";
            }
             
        }
        cout << "\n";
    }
}