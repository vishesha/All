#include "taskfunction.h"
#include <bits/stdc++.h>

using namespace std;
void task4(int m, int n, vector<vector<int>> M)
{

	int maximumsum = INT_MIN;
	int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
	int sum;

	for (int p = 0; p < m; p++)
	{
		for (int q = 0; q < n; q++)
		{
			for (int r = p; r < m; r++)
			{
				for (int s = q; s < n; s++)
				{
					sum = 0;
					for (int i = p; i <= r; i++)
					{
						for (int j = q; j <= s; j++)
						{
							sum = sum + M[i][j];
						}
					}

					if (sum > maximumsum)
					{
						maximumsum = sum;
						x1 = p;
						y1 = q;
						x2 = r;
						y2 = s;
					}
				}
			}
		}
	}

	cout << x1 + 1 << " " << y1 + 1 << " " << x2 + 1 << " " << y2 + 1 << " " << maximumsum << endl;
}
