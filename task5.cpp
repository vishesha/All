#include <bits/stdc++.h>
#include "taskfunction.h"

using namespace std;

int maxsubarray(vector<int> &A, int &start, int &end, int n) // Using maxsubarray problem in task 3b
{
	int maximumsum = A[-1];
	int currentmaximum = A[-1];
	start = -1;
	end = -1;

	for (int i = 0; i < n; i++)
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

void task5(int m, int n, vector<vector<int>> matrix)
{
	int maxSum = INT_MIN;
	int Left, Right, Top, Bottom;

	int currentleft, currentright, i, j;
	int sum, start, end;

	for (currentleft = 0; currentleft < n; currentleft++)
	{

		for (currentright = currentleft; currentright < n; currentright++)
		{

			vector<int> temp(m, 0);
			for (i = 0; i < m; i++)
			{
				for (j = currentleft; j <= currentright; j++)
				{
					temp[i] = temp[i] + matrix[i][j];
				}
			}

			sum = maxsubarray(temp, start, end, m);

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
