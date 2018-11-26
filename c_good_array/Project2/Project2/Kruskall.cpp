#include "Kruskall.h"
#include "Graph.h"  //--core--

void kruskal(int &n, int &m, int L[20], graph *G) {
	//--------------------------------------Preparation----------------------------------
	int i = 1, j, k = 0, ct = 0;
	int i2 = 0;
	int x, y;

	n = G->noOfVertices;
	m = G->noOfEdges;

	for (i = 0; i < m - 1; i++)

		for (j = i + 1; j < m; j++)

			if (G->pEdge[i].weight > G->pEdge[j].weight) {

				edge aux;

				aux = G->pEdge[i];
				G->pEdge[i] = G->pEdge[j];
				G->pEdge[j] = aux;

			}
	//--------------------------------------END----------------------------------------
	//-------------------------------------Kruskall------------------------------------
	for (int i = 0; i < n; i++)

		L[i] = i;

	printf("\n MST has the followind edges: \n");

	while (k < n - 1) {

		if (L[G->pEdge[i2].source] != L[G->pEdge[i2].destination]) {

			k++;

			ct = ct + G->pEdge[i2].weight;

			printf("[%d <-> %d]\n", G->pEdge[i2].source, G->pEdge[i2].destination);

			x = L[G->pEdge[i2].destination];					//unite the MSTs through edge [x,y]
			y = L[G->pEdge[i2].source];

			for (int j = 0; j < n; j++)

				if (L[j] == x)

					L[j] = y;

		}

		i2++;

	}

	printf("\n Total cost = %d \n", ct);
	//--------------------------------------------------End------------------------------------------------
}