#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;

int maxsubarrayfunction(vector<int> &A, int &start, int &end, int n) // Using maxsubarray problem in task 3b
{
	int maximumsum = A[0];
	int currentmaximum = A[0];
	start = 0;
	end = 0;

	for (int i = 1; i < n; i++)
	{
		if (A[i] < currentmaximum + A[i]) // implementing substructure property for Dynamic programming
		{
			currentmaximum = currentmaximum + A[i];
			if (maximumsum < currentmaximum)
			{
				maximumsum = currentmaximum;
				end = i;
			}
		}
		else
		{
			currentmaximum = A[i];
			if (maximumsum < currentmaximum)
			{
				maximumsum = currentmaximum;
				start = i;
				end = i;
			}
		}
	}

	return maximumsum;
}

void task6(int m, int n, vector<vector<int>> matrix)
{
	int maxSum = INT_MIN;
	int Left, Right, Top, Bottom;

	int currentleft, currentright, i;
	int sum, start, end;

	for (currentleft = 0; currentleft < n; currentleft++)
	{

		vector<int> temp(m, 0);

		for (currentright = currentleft; currentright < n; currentright++)
		{

			for (i = 0; i < m; i++)
				temp[i] = temp[i] + matrix[i][currentright];

			sum = maxsubarrayfunction(temp, start, end, m);

			if (sum > maxSum)
			{
				maxSum = sum;
				Left = currentleft;
				Right = currentright;
				Top = start;
				Bottom = end;
			}
		}
	}

	cout << Top + 1 << " " << Left + 1 << " " << Bottom + 1 << " " << Right + 1 << " " << maxSum << endl;
}
