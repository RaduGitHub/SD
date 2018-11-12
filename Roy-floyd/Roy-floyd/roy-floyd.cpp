#include "roy-floyd.h"

#include <stdio.h>
#include <iostream>


void initial_cost(int *cost, int &n, int &m)
{
	int i, j;


	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (i == j)
				*(cost + i * n + j) = 0;
			else
				*(cost + i * n + j) = 9000;
		}

}


void display_matrix(int *cost, int n)

{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (*(cost + i * n + j) == 9000)
				printf("   -");
			else
				printf("%4d", *(cost + i * n + j));
		printf("\n");
	}
}


void Roy_Floyd(int *cost, int n)

{

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (*(cost + i * n + j) > *(cost + i * n + k) + *(cost + k * n + j))
					*(cost + i * n + j) = *(cost + i * n + k) + *(cost + k * n + j);
}


void print_path(int first, int last, int *cost, int n)
{
	if (*(cost + first * n + last) < 9000)
	{
		printf("\n The path from %d to %d has the weight %d ", first, last, *(cost + first * n + last));
		printf("\n The minimum cost path is: %d ", first);
		compute_path(first, last, n, cost);
	}
	else
		printf("\n There is no path between %d to %d ", first, last);
}


void compute_path(int i, int j, int n, int *cost)
{
	int ok = 0, k = 1;

	while (k <= n && !ok)
	{
		if (i != k && j != k)
			if (*(cost + i * n + j) == *(cost + i * n + k) + *(cost + k * n + j))
			{
				compute_path(i, k, n, cost);
				compute_path(k, j, n, cost);
				ok = 1;
			}
		k++;
	}
	if (!ok)
	{
		printf("%d ", j);
	}
}