#include<stdio.h>
#include<stdlib.h>

typedef struct tag {
	int m_val;
	struct tag* pnext;
}Node,*pNode;

typedef struct {
	pNode head;
	int size;
}Stack,*pStack;

void init_stack(pStack);
void push(pStack, int); 
void pop(pStack);
int top(pStack);
int empty(pStack);
int size(pStack);