#include<stdio.h>
#include<stdlib.h>
#include<iostream>

typedef struct _Node
{
	int data;
	struct _Node *left;
	struct _Node *right;
}Node;

void Display(Node* root, int nivel);
Node *Add_Node(Node *root, int data);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);
Node* FindMin(Node* root);
Node* Delete(Node *root, int data);