#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;

// int start =1;
// int end =1;
// int maximumsum = INT_MIN;

int Maximum_sum(vector<int> A, int S[], int i, int &start, int &end, int &maximumsum)
{
	if (i == 0)
	{
		return A[0];
	}
	else
	{
		if (S[i] == INT_MIN) // Checking if value of substructure is already calculated
		{
			int sum = Maximum_sum(A, S, i - 1, start, end, maximumsum) + A[i]; // Calculating solution of substructure and implementing dynamic programming with the calculated value
			if (sum > A[i])
			{
				S[i] = sum;
				if (maximumsum < S[i])
				{
					maximumsum = S[i];
					end = i;
				}
			}
			else
			{
				S[i] = A[i];
				if (maximumsum < S[i])
				{
					maximumsum = S[i];
					start = i;
					end = i;
				}
			}
		}
		else
		{
			int sum = S[i - 1] + A[i]; // implementing substructure property for Dynamic programming
			if (sum > A[i])
			{
				S[i] = sum;
				if (maximumsum < S[i])
				{
					maximumsum = S[i];
					end = i;
				}
			}
			else
			{
				S[i] = A[i];
				if (maximumsum < S[i])
				{
					maximumsum = S[i];
					start = i;
					end = i;
				}
			}
		}
	}
	return S[i];
}

void task3a(int n, vector<int> A)
{

	int start = 0;
	int end = 0;
	int maximumsum = INT_MIN;
	int S[n]; // S[i] contains maximum sum in contiguous subarray till ith index
	for (int i = 0; i < n; i++)
	{
		S[i] = INT_MIN;
	}
	int sum = Maximum_sum(A, S, n - 1, start, end, maximumsum);

	cout << start + 1 << " " << end + 1 << " " << maximumsum << endl;
}
