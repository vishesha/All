#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;
void task3b(int n, vector<int> A)
{

	vector<int> S(n); // S[i] contains maximum sum in contiguous subarray till ith index
	for (int i = 0; i < n; i++)
	{
		S[i] = A[i];
	}

	int maximumsum = S[0];
	int start = 0, end = 0;

	for (int i = 1; i < n; i++)
	{
		if (S[i] < S[i - 1] + A[i]) // implementing substructure property for Dynamic programming
		{
			S[i] = S[i - 1] + A[i];
			if (maximumsum < S[i])
			{
				maximumsum = S[i];
				end = i;
			}
		}
		else
		{
			if (maximumsum < S[i])
			{
				maximumsum = S[i];
				start = i;
				end = i;
			}
		}
	}

	cout << start + 1 << " " << end + 1 << " " << maximumsum << endl;
}
