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
void Print_Indices(int arr[],int s)
{}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    Arrsc(arr, x);
    return 0;
}