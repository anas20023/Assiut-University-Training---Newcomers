#include <bits/stdc++.h>
using namespace std;

int Knapsack(int W, int index_of_nth_item, int weight[], int value[])
{
	if (index_of_nth_item < 0 || W == 0)
	{
		// Base case
		return 0;
	}

	// Weight of the n-th item is greater than W.

	if (weight[index_of_nth_item] > W)
	{
		return Knapsack(W, index_of_nth_item - 1, weight, value);
	}

	// Weight of the n-th item is less than W.

	int include_nth_item = value[index_of_nth_item] + Knapsack(W - weight[index_of_nth_item], index_of_nth_item - 1, weight, value);

	int exclude_nth_item = Knapsack(W, index_of_nth_item - 1, weight, value);

	return max(include_nth_item, exclude_nth_item);
}

int main()
{
	int number_of_items = 3;
    
        // Maximum Capacity of Knapsack
	int W = 30;

	int value[number_of_items], weight[number_of_items];

	// We will use 0 based indexing for taking the inputs.

	// Weight and the value associated with the first item 
	weight[0] = 5, value[0] = 50;

	// Weight and the value associated with the second item 
	weight[1] = 20, value[1] = 140;

	// Weight and the value associated with the third item 
	weight[2] = 10, value[2] = 60;

	cout << "The maximum sum of the value for the given knapsack is :\n";
    
        // Initially pass the index of the last item to the Knapsack function.
	cout << Knapsack(W, number_of_items - 1, weight, value) << "\n";

	return 0;
}
