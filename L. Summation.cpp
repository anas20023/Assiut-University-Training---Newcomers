#include <iostream>
#include <string>
using namespace std;
long long sum;
void Arr_Sc(long long arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
}
void Find_Max(long long arr[], int s)
{
    if (s < 0)
    {
        return;
    }
    sum += arr[s];
    Find_Max(arr, s - 1);
}
int main()
{
    int x;
    cin >> x;
    long long arr[x];
    Arr_Sc(arr, x);
    Find_Max(arr, x - 1);
    cout << sum << "\n";
    return 0;
}