#include <iostream>
#include <string>
using namespace std;

int Fib_num(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    return Fib_num(n - 1) + Fib_num(n - 2);
}
int main()
{
    int x;
    cin >> x;
    cout << Fib_num(x) << endl;
    return 0;
}