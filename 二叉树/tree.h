#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	char c;
	int data;
	struct node* left;	//指向左边结点
	struct node* right;//指向右边结点
}Node,*pNode;

typedef struct {
	pNode root;
}Tree;
