#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;
void task2(int n, vector<int> A)
{
	int sum;

	int S[n][n]; // S[i][j] is considered as sum of elements of array from i to j indexes

	int maximumsum = INT_MIN;
	int start = -1, end = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i == j)
			{
				S[i][i] = A[i];
				if (S[i][i] > maximumsum)
				{
					maximumsum = S[i][i];
					start = i;
					end = i;
				}
			}
			else
			{
				S[i][j] = S[i][j - 1] + A[j]; // implementing substructure property for Dynamic programming
				if (S[i][j] > maximumsum)
				{
					maximumsum = S[i][j];
					start = i;
					end = j;
				}
			}
		}
	}

	cout << start + 1 << " " << end + 1 << " " << maximumsum << endl;
}
