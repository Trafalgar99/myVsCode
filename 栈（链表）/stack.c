#include"func.h"

void init_stack(pStack p) {
	p->head = NULL;
	p->size = 0;
}

void push(pStack p, int val) {
	pNode pnew = (pNode)calloc(1, sizeof(Node));
	pnew->m_val = val;
	pnew->pnext = p->head;
	p->head = pnew; 
	p->size++;
}

int top(pStack p) {
	return p->head->m_val;
}

void pop(pStack p) {
	pNode pcur;
	if (NULL == p->head) {		//°²È«ÅÐ¶Ï
		printf("stack is empty\n");
		return;
	 }
	pcur = p->head;
	p->head = p->head->pnext;
	free(pcur);
	pcur = NULL;
	p->size--; 
}

int empty(pStack p) {
	return !p->size;
}