#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int num;
	float score;
	struct student *pnext;
}stu ,*pstu;				//pstuµÈ¼ÛÓÚstu*

void list_head_insert(pstu*, pstu*, int);
void list_tail_insert(pstu*, pstu*, int);
void list_sort_insert(pstu*, pstu*, int);
void list_sort_insert_2(pstu*, pstu*, int);
void list_delete(pstu*, pstu*, int);
void list_search(pstu,int);
void list_modify(pstu,int,float);
void list_print(pstu);
