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
int Sum_return(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int n, move_a, mult_b, sum_a, sum_b;
        cin >> n >> move_a >> mult_b;
        int arr[n];
        Arrsc(arr, n);
        while (sum_a > sum_b)
        {
            sum_a = Sum_return(arr, n - 1);
            arr[n - 1] *= -1;
            sum_b = Sum_return(arr, n);
        }
        if (sum_a < sum_b)
        {
            cout << sum_a << "\n";
        }
        else
        {
            cout << sum_b << "\n";
        }
    }

    return 0;
}