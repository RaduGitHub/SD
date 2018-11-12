#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>

#include "roy-floyd.h"

using namespace std;

int main()

{
	char ch;
	int x, y, n, m, c;
	int i;
	int *cost;

	//open and check if the file was open corectly
	ifstream f2;
	f2.open("roy_in.txt");
	if (f2)
		printf("The file has been successfuly opened! ");
	else
		printf("Error opening file! ");

	printf("\n");

	//reading sizes
	f2 >> n;
	f2 >> m;

	cost = new int[(n + 1)*(n + 1)];

	//seting initial cost
	initial_cost(cost, n, m);

	//reading values from file
	for (i = 0; i < m; i++)
	{
		f2 >> x; //reading starting node
		f2 >> y; //reading last node
		f2 >> c; //reading weight
		*(cost + x * n + y) = c; //putting weight in matrix
	}


	printf("\n The weight matrix is:\n");
	display_matrix(cost, n);
	Roy_Floyd(cost, n);

	printf("\n The minimum cost matrix is:\n");
	display_matrix(cost, n);


	do
	{
		printf("\n\nDetermine which is the minimum cost path between two nodes of the graph\n");
		printf("x= ");
		scanf_s("%d", &x);

		printf("y= ");
		scanf_s("%d", &y);
		print_path(x, y, cost, n);

		printf("\n\n\n Do you want to find a path between other nodes from the graph? <y/n>");
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

	f2.close();
	delete[]cost;
	return 0;
}