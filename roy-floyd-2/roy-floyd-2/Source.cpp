#include "roy_floyd.h"

int main()
{
	FILE *f;
	errno_t err = fopen_s(&f, "roy_in.txt", "rt");
	if (!err)
		printf("The file has been successfuly opened! ");
	else
		printf("Error opening file! ");

	char ch;
	int source, destination, x, y, n, m, c;
	vector<vector<int>> cost;

	printf("\n");
	fscanf_s(f, "%d", &n);    // n = number of vertices
	fscanf_s(f, "%d\n", &m);	//m = number of edges

	for (int i = 0; i < n; i++)
	{
		cost.push_back(vector<int>());
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				cost[i].push_back(0);
			else
				cost[i].push_back(9000);
		}

	for (int i = 1; i <= m; i++)
	{
		fscanf_s(f, "%d%d%d\n", &x, &y, &c); // c = cost of the edge from x to y
		cost[x - 1][y - 1] = c;
	}

	printf("\n The weight matrix is:\n");
	displayMatrix(cost, n);
	RoyFloyd(cost, n);

	printf("\n The minimum cost matrix is:\n");
	displayMatrix(cost, n);

	do
	{
		printf("\n\nDetermine which is the minimum cost path between two nodes of the graph\n");
		printf("source= ");
		scanf_s("%d", &source);

		printf("destination= ");
		scanf_s("%d", &destination);
		printPath(source, destination, cost, n);

		printf("\n\n\n Do you want to find a path between other nodes from the graph? <y/n>");
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	fclose(f);
	system("pause");
	return 0;
}