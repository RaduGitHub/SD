#include "roy_floyd.h"

void displayMatrix(vector<vector<int>> cost, int n)

{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (cost[i][j] == 9000)
				printf("   -");
			else
				printf("%4d", cost[i][j]);
		printf("\n");
	}
}

void RoyFloyd(vector<vector<int>> &cost, int n)
{

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (cost[i][j] > cost[i][k] + cost[k][j])
					cost[i][j] = cost[i][k] + cost[k][j];
}

void printPath(int first, int last, vector<vector<int>> cost, int n)
{
	if (cost[first][last] < 9000)
	{
		printf("\n The path from %d to %d has the weight %d", first, last, cost[first][last]);
		printf("\n The minimum cost path is: %d ", first);
		computePath(first, last, n, cost);
	}
	else
		printf("\n There is no path between %d to %d", first, last);
}

void computePath(int i, int j, int n, vector<vector<int>> cost)
{
	int ok = 0, k = 0;

	while (k < n && !ok)
	{
		if (i != k && j != k)
			if (cost[i][j] == cost[i][k] + cost[k][j])
			{
				computePath(i, k, n, cost);
				computePath(k, j, n, cost);
				ok = 1;
			}
		k++;
	}
	if (!ok)
	{
		printf("%d", j);
	}
}