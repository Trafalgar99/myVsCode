//题目：创建一个链表。

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int num;
	struct Node* pnext;
}Node;
typedef struct Node2 {
	int num;
	struct Node2* pformer;
	struct Node2* later;
}Node2;


void addnode2(Node2**phead,Node2**ptail,int i) {
	Node2* pcur=*phead;
	Node2* pnew = (Node2*)calloc(1,sizeof(Node2));
	pnew->num = i;
	if (NULL == *phead) {
		
		*phead = pnew;
		*ptail = pnew;
		pcur = pnew;
	}
	else {
		pnew->later = *phead;
		*phead = pnew;
		pcur->pformer = *phead;
		pcur = *phead;
		
	}


}
		 
void connet(Node2**phead,Node2**ptail2) {
	Node2* p1 = *phead;
	Node2* p2 = *ptail2;
	
	p1->pformer = p2;
	p2->later = p1;
	while (p1->pformer) {
		*phead = p1->pformer;
		p1 = *phead;
	}
	
	
}




void print_from_head(Node2*phead) {
	while (phead) {
		printf("%d ", phead->num);
		phead = phead->later;
	}
}
void print_from_tail(Node2* ptail) {
	while (ptail) {
		printf("%d ", ptail->num);
		ptail = ptail->pformer;
	}
}
void scan_data(Node2**phead,Node2**ptail){
	int i;
	while (EOF != scanf("%d", &i)) {
		addnode2(phead, ptail, i);
	}
}

int main() {
	

	Node2* phead=NULL;
	Node2* ptail = NULL;
	scan_data(&phead, &ptail);
	//print_from_head(phead);
	//printf("\n-------------------\n");
	//print_from_tail(ptail);

	Node2* phead2 = NULL;
	Node2* ptail2 = NULL;
	scan_data(&phead2, &ptail2);

	connet(&phead,&ptail2);
	print_from_head(phead);

	system("pause");

}