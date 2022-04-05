#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;
void task1(int n, vector<int> A)
{
	int sum;
	int maximumsum = INT_MIN;
	int start = -1, end = -1;

	for (int i = 0; i < n; i++) // iterating through each element in array considering it as left index for maxsum
	{
		for (int j = i; j < n; j++) // iterating through each element from i in array considering it as right index for maxsum
		{
			sum = 0;
			for (int k = i; k <= j; k++) // iterating through each element from i to j to calculate sum
			{
				sum = sum + A[k];
			}

			if (sum > maximumsum) // checking if current sum is greater than existing maximum sum and updating values
			{
				maximumsum = sum;
				start = i;
				end = j;
			}
		}
	}

	cout << start + 1 << " " << end + 1 << " " << maximumsum << endl;
}
