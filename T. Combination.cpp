#include <iostream>
#include <string>
using namespace std;
long long Find_Fact(int x, int p)
{
    if (x < p)
    {
        return 0;
    }
    if (p == 0 || x == 1)
    {
        return 1;
    }
    if (p == 0)
    {
        return x;
    }

    return Find_Fact(x - 1, p - 1) + Find_Fact(x - 1, p);
}

int main()
{
    int x, y;
    cin >> x >> y;
    long long comb = Find_Fact(x, y);
    cout << comb << endl;
    return 0;
}