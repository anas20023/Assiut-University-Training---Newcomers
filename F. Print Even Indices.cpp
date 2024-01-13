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
void Print_Indices(int arr[], int s)
{
    if(s)
    Print_Indices(arr[], s - 1);
    if (s % 2 == 0)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    Arrsc(arr, x);
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}