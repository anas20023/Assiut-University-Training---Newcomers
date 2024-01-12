#include <iostream>
#include <string>
using namespace std;

void Print_N(int n)
{
    if (n == 0)
    {
        return;
    }

    Print_N(n - 1);
    cout << n << "\n";
}
int main()
{
    int x;
    cin >> x;
    Print_N(x);
    return 0;
}