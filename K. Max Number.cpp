#include <iostream>
#include <string>
using namespace std;
long long max_num;
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
    if (arr[s] > max_num)
    {
        max_num = arr[s];
    }
    Find_Max(arr, s - 1);
}
int main()
{
    int x;
    cin >> x;
    long long arr[x];
    Arr_Sc(arr, x);
    max_num = arr[0];
    // Pt_Sc(arr, x);
    Find_Max(arr, x - 1);
    cout << max_num << "\n";
    return 0;
}