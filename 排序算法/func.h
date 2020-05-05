#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100000000	
#define SWAP(a,b){int tmp;tmp=a;a=b;b=tmp;}//宏定义,实现交换功能

void arr_print(int*);
void arr_select(int *);
void arr_insert(int*);
void arr_insert2(int*,int);
void ShellSort(int*,int);
void arr_quick(int*,int,int);
int compare(const void*, const void*);
void arr_heap(int *);