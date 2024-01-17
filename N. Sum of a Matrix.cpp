#include <iostream>
#include <string>
using namespace std;
int sum = 0;
void Matrix_Scan(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
}
int Matrix_Sum(int **arr, int r, int c)
{
    if (r > 0 && c > 0)
        return sum;
    sum += arr[r][c];
    Matrix_Sum(arr, r - 1, c - 1);
}
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
   // Matrix_Scan(arr, r, c);
    return 0;
}