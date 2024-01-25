#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c], arr_2[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr_2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr_2[i][j] + arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
