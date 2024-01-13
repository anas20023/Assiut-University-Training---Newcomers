#include <iostream>
#include <string>
using namespace std;

void Print_Digit(long long n)
{
    if (n == 0)
    {
        cout << "0 ";
        return;
    }

    if (n < 10)
    {
        cout << n << " ";
        return;
    }

    Print_Digit(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        long long p;
        cin >> p;
        Print_Digit(p);
        cout << "\n";
    }

    return 0;
}
