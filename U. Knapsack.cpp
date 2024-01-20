#include <iostream>

using namespace std;

int knapsack(int N, int W, int weights[], int values[])
{
    if (N == 0 || W == 0)
    {
        return 0;
    }
    if (weights[N - 1] > W)
    {
        return knapsack(N - 1, W, weights, values);
    }
    int include_current = values[N - 1] + knapsack(N - 1, W - weights[N - 1], weights, values);
    int exclude_current = knapsack(N - 1, W, weights, values);

    return max(include_current, exclude_current);
}

int main()
{
    int N, W;
    cin >> N >> W;

    int weights[N];
    int values[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> weights[i] >> values[i];
    }
    cout << knapsack(N, W, weights, values) << endl;

    return 0;
}
