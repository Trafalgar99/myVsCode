#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	char c;
	int data;
	struct node* left;	//ָ����߽��
	struct node* right;//ָ���ұ߽��
}Node,*pNode;

typedef struct {
	pNode root;
}Tree;
