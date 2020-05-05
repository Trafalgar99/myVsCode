#include "func.h"

//头插法新建链表
void list_head_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pnew =(pstu) malloc(sizeof(stu));		//申请一个结构体大小的空间
	memset(pnew, 0, sizeof(stu));
	pnew->num = i;
	if (NULL == *pphead) {			//说明链表为空 
		*pphead = pnew;	
		*pptail = pnew;
	}
	else {
		pnew->pnext = *pphead;		//原有链表头给新结点pnext
		*pphead = pnew;				//新结点变为链表头

	}
}

//尾插法新建链表
void list_tail_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pnew = (pstu)calloc(1,sizeof(stu));//申请一个结构体大小的空间,自行把空间初始化为0
	pnew->num = i;
	if(NULL == *pphead) {			//说明链表为空 
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		(*pptail)->pnext = pnew;
		*pptail = pnew;
	}
}

//有序插入新建链表
void list_sort_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pcur, ppre;
	pstu pnew = (pstu)calloc(1, sizeof(stu));//申请一个结构体大小的空间,自行把空间初始化为0
	pnew->num = i;
	pcur = ppre = *pphead;
	if (NULL == pcur) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else if (i<pcur->num) {	//插入到头部
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
	else {						//插入到中间和尾部
		while (pcur) {
			if (i < pcur->num) {
				pnew->pnext = pcur;
				ppre->pnext = pnew;
				break;
			}
			ppre = pcur;//
			pcur = pcur->pnext;
		}
		if (NULL == pcur) {		//因为没有插入到中间，所以尾插法
			ppre->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//有序插入新建链表2
void list_sort_insert_2(pstu* pphead, pstu* pptail, int i) {
	pstu pcur;
	pstu pnew = (pstu)calloc(1, sizeof(stu));//申请一个结构体大小的空间,自行把空间初始化为0
	pnew->num = i;
	pcur = *pphead;
	if (NULL == pcur) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else if (i < pcur->num) {	//插入到头部
		pnew->pnext = pcur;
		*pphead = pnew;
	}
	else {
		while (pcur->pnext) {	//插入到中间
			if (i < pcur->pnext->num) {
				pnew->pnext = pcur->pnext;
				pcur->pnext = pnew;
				break;
			}
			pcur = pcur->pnext;
		}
		if (NULL == pcur->pnext) {//要插入到尾部
			pcur->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//链表删除
void list_delete(pstu*pphead, pstu*pptail, int i) {
	pstu pcur,ppre;
	ppre=pcur = *pphead;
	if (NULL == pcur) {
		printf("list is empty\n");
		return;
	}
	else if(i==pcur->num) {	//删除的是头结点
		*pphead = pcur->pnext;
		free(pcur);
		pcur = NULL;
		if (NULL == *pphead) {//说明删除后链表为空
			*pptail = NULL;
		}
	}
	else {
		pcur = pcur->pnext;
		while (pcur) {		//删除中间和尾部 
			if (i == pcur->num) {
				ppre->pnext = pcur->pnext;
				free(pcur);
				break;
			}
			ppre = pcur;
			pcur = pcur->pnext;
		}
		if (pcur==*pptail) {	//因为删除的是尾部，所以改变pptail 
			*pptail = ppre;
		}
		if (NULL == pcur) {
			printf("no this value");
		}
	}
}

//链表查询
void list_search(pstu phead,int i) {
	while (phead) {
		if (phead->num == i) {
			printf("find value=%d\n", phead->num);
			break;
		}
		phead = phead->pnext;
	}
	if (phead == NULL) {
		printf("don't find this value.\n"); 
	}
}

//链表修改
void list_modify(pstu phead,int num,float score) {
	while (phead) {
		if (phead->num == num) {
			phead->score = score;
			break;
		}
		phead = phead->pnext;
	}
	if (phead == NULL) {
		printf("don't find this num	.\n");
	}
}

//从头输出链表
	void list_print(pstu phead) {
	printf("\n--------------------------\n");
	while (phead) {
		printf("%3d %5.2f \n", phead->num,phead->score);
		phead = phead->pnext;
	}
	printf("\n--------------------------\n");
	printf("\n");
}
