#include <iostream>
#include <string>
using namespace std;

unsigned long long Find_Fact(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * Find_Fact(x - 1);
}

int main()
{
    int x, y;
    cin >> x >> y;
    unsigned long long comb = Find_Fact(x) / ((Find_Fact(y)) * (Find_Fact(x - y)));
    cout << comb << endl;
    return 0;
}