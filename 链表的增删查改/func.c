#include "func.h"

//ͷ�巨�½�����
void list_head_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pnew =(pstu) malloc(sizeof(stu));		//����һ���ṹ���С�Ŀռ�
	memset(pnew, 0, sizeof(stu));
	pnew->num = i;
	if (NULL == *pphead) {			//˵������Ϊ�� 
		*pphead = pnew;	
		*pptail = pnew;
	}
	else {
		pnew->pnext = *pphead;		//ԭ������ͷ���½��pnext
		*pphead = pnew;				//�½���Ϊ����ͷ

	}
}

//β�巨�½�����
void list_tail_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pnew = (pstu)calloc(1,sizeof(stu));//����һ���ṹ���С�Ŀռ�,���аѿռ��ʼ��Ϊ0
	pnew->num = i;
	if(NULL == *pphead) {			//˵������Ϊ�� 
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		(*pptail)->pnext = pnew;
		*pptail = pnew;
	}
}

//��������½�����
void list_sort_insert(pstu* pphead, pstu* pptail, int i) {
	pstu pcur, ppre;
	pstu pnew = (pstu)calloc(1, sizeof(stu));//����һ���ṹ���С�Ŀռ�,���аѿռ��ʼ��Ϊ0
	pnew->num = i;
	pcur = ppre = *pphead;
	if (NULL == pcur) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else if (i<pcur->num) {	//���뵽ͷ��
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
	else {						//���뵽�м��β��
		while (pcur) {
			if (i < pcur->num) {
				pnew->pnext = pcur;
				ppre->pnext = pnew;
				break;
			}
			ppre = pcur;//
			pcur = pcur->pnext;
		}
		if (NULL == pcur) {		//��Ϊû�в��뵽�м䣬����β�巨
			ppre->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//��������½�����2
void list_sort_insert_2(pstu* pphead, pstu* pptail, int i) {
	pstu pcur;
	pstu pnew = (pstu)calloc(1, sizeof(stu));//����һ���ṹ���С�Ŀռ�,���аѿռ��ʼ��Ϊ0
	pnew->num = i;
	pcur = *pphead;
	if (NULL == pcur) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else if (i < pcur->num) {	//���뵽ͷ��
		pnew->pnext = pcur;
		*pphead = pnew;
	}
	else {
		while (pcur->pnext) {	//���뵽�м�
			if (i < pcur->pnext->num) {
				pnew->pnext = pcur->pnext;
				pcur->pnext = pnew;
				break;
			}
			pcur = pcur->pnext;
		}
		if (NULL == pcur->pnext) {//Ҫ���뵽β��
			pcur->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//����ɾ��
void list_delete(pstu*pphead, pstu*pptail, int i) {
	pstu pcur,ppre;
	ppre=pcur = *pphead;
	if (NULL == pcur) {
		printf("list is empty\n");
		return;
	}
	else if(i==pcur->num) {	//ɾ������ͷ���
		*pphead = pcur->pnext;
		free(pcur);
		pcur = NULL;
		if (NULL == *pphead) {//˵��ɾ��������Ϊ��
			*pptail = NULL;
		}
	}
	else {
		pcur = pcur->pnext;
		while (pcur) {		//ɾ���м��β�� 
			if (i == pcur->num) {
				ppre->pnext = pcur->pnext;
				free(pcur);
				break;
			}
			ppre = pcur;
			pcur = pcur->pnext;
		}
		if (pcur==*pptail) {	//��Ϊɾ������β�������Ըı�pptail 
			*pptail = ppre;
		}
		if (NULL == pcur) {
			printf("no this value");
		}
	}
}

//�����ѯ
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

//�����޸�
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

//��ͷ�������
	void list_print(pstu phead) {
	printf("\n--------------------------\n");
	while (phead) {
		printf("%3d %5.2f \n", phead->num,phead->score);
		phead = phead->pnext;
	}
	printf("\n--------------------------\n");
	printf("\n");
}
