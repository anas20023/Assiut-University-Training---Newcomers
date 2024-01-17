#include <iostream>
#include <string>
using namespace std;
long long s_sum;
void Arr_Sc(long long arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
}
void S_Sum_Find(long long arr[], int s, int t_out)
{
    if (s < 0 || t_out == 0)
    {
        return;
    }
    s_sum += arr[s];
    S_Sum_Find(arr, s - 1, t_out - 1);
}
int main()
{
    int x, y;
    cin >> x >> y;
    long long arr[x];
    Arr_Sc(arr, x);
    S_Sum_Find(arr, x - 1, y);
    cout << s_sum << "\n";
    return 0;
}