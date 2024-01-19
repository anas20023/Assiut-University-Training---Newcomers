#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int len = 1;
void Set_len(int num)
{
    if (num == 1)
    {
        return;
    }

    if (num % 2 != 0)
    {
        len++;
        Set_len((3 * num) + 1);
    }
    else
    {
        len++;
        Set_len(num / 2);
    }
}
int main()
{
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << x << "\n";
        return 0;
    }
    else if (x == 2)
    {
        cout << x << "\n";
        return 0;
    }
    Set_len(x);
    cout << len << "\n";
    return 0;
}