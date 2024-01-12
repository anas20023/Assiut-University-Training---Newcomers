#include <iostream>
#include <string>
using namespace std;

void Print_rec(int n);
int main()
{
    int n;
    cin >> n;
    // cout << n;
    Print_rec(n);
    return 0;
}
void Print_rec(int n)
{
    if (n == 0)
        return;
    Print_rec(n - 1);
    cout << "I love Recursion\n";
}