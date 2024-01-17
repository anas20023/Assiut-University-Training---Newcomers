#include <iostream>
#include <string>
using namespace std;

void Inv_Pyramid(int space, int str, int newlne, int n)
{
    if (newlne > n)
    {
        return;
    }
    Inv_Pyramid(space - 1, str + 2, newlne + 1, n);
    for (int i = 0; i < space; i++)
    {
        cout << ' ';
    }
    for (int i = 0; i < str; i++)
    {
        cout << '*';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    Inv_Pyramid(n - 1, 1, 1, n);
    return 0;
}