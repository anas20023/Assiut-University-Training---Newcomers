#include <iostream>
#include <string>
using namespace std;

void Arr_Sc(long long arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    Arr_Sc(arr, n);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}