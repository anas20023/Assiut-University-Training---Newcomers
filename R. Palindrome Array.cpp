#include <iostream>
#include <string>
using namespace std;
bool flag = false;
void ArrSc(long long arr[], int s)
{
    for (int i = 1; i <= s; i++)
    {
        cin >> arr[i];
    }
}
void Check_Pal(long long arr[], int sp, int ep)
{
    if (sp >= ep)
    {
        return;
    }

    if (arr[sp] != arr[ep])
    {
        flag = false;
        return;
    }
    else
    {
        flag = true;
        Check_Pal(arr, sp + 1, ep - 1);
    }
}
int main()
{
    int x;
    cin >> x;
    long long arr[x];
    ArrSc(arr, x);
    int stp = 1, endp = x;
    Check_Pal(arr, stp, endp);
    (flag == true) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}