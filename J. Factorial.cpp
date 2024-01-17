#include <iostream>
#include <string>
using namespace std;

long long Print_Fact(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * Print_Fact(x - 1);
}
int main()
{
    int c;
    cin >> c;
    long long fact = Print_Fact(c);
    cout << fact << "\n";
    return 0;
}