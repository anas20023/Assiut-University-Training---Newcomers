#include <iostream>
#include <string>
using namespace std;

void Convert_bin(int num)
{
    if (num == 0)
    {
        return;
    }

    Convert_bin(num / 2);
    int binNum = num % 2;
    cout << binNum;
}
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int num;
        cin >> num;
        Convert_bin(num);
        cout << "\n";
    }

    return 0;
}