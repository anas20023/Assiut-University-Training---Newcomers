#include <iostream>
#include <string>
using namespace std;
long long arr_Sum = 0;
void ArrSc(long long arr[], int s)
{
    for (int i = 1; i <= s; i++)
    {
        cin >> arr[i];
    }
}
void Find_Avg(long long arr[], int s)
{
    if (s == 0)
    {
        return;
    }
    Find_Avg(arr, s - 1);
    arr_Sum += arr[s];
}
int main()
{
    int x;
    cin >> x;
    long long arr[x];
    ArrSc(arr, x);
    Find_Avg(arr, x);
    double avg = arr_Sum / x;
    printf("%06f", avg);
    return 0;
}