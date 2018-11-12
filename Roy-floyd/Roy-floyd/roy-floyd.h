#pragma once
#ifndef __HEADER_H__
#define __HEADER_H__

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;

#define Infinit 90000

void initial_cost(int *cost, int &n, int &m);

void display_matrix(int *cost, int n);

void Roy_Floyd(int *cost, int n);

void print_path(int first, int last, int *cost, int n);

void compute_path(int node1, int node2, int n, int *cost);

#endif
