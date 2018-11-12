#ifndef __HEADER_H__
#define __HEADER_H__

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#define Infinit 90000

void displayMatrix(vector<vector<int>> cost, int n);

void RoyFloyd(vector<vector<int>> &cost, int n); //compute the minimum cost path between all nodes

void printPath(int first, int last, vector<vector<int>> cost, int n); // print the path's weight from first to last and the minimum cost path between them

void computePath(int node1, int node2, int n, vector<vector<int>> cost); // compute path between node1 and node2

#endif;