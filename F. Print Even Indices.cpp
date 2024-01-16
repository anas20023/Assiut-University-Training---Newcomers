#include <iostream>
#include <string>
using namespace std;

void Arrsc(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
}
void Check_Idx(int arr[], int n)
{
    if (n <= -1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        cout << arr[n] << " ";
    }
    if (n >= 0)
    {
        Check_Idx(arr, n - 1);
    }
}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    Arrsc(arr, x);
    Check_Idx(arr, x-1);

    return 0;
}