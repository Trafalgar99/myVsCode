#include "func.h"

int main() {
	pstu phead=NULL, ptail=NULL;//定义了一个链表
	int i;
	float score;

	while (scanf_s("%d", &i) != EOF) {
		//list_head_insert(&phead, &ptail, i);
		//list_tail_insert(&phead, &ptail, i);
		list_sort_insert(&phead, &ptail, i);
		//list_sort_insert_2(&phead, &ptail, i);
	}

	list_print(phead);

	//while (printf("Please input delete/find value:\n"), scanf_s("%d", &i) != EOF) {
	//	//list_delete(&phead, &ptail, i);
	//	//list_print(phead);
	//	//list_search(phead, i);
	//}

	while (printf("Please input modify num score:\n"), scanf_s("%d%f", &i,&score) != EOF) {
		list_modify(phead,i,score);
		list_print(phead);
	}
	system("pause");
	return 0;
}