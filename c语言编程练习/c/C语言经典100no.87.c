//题目：回答结果（结构体变量传递）

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int x;
	char c;
} a;

void f(struct student* b)
{
	b->x = 555;
	b->c = 'w';
}


int main() {
	a.x = 4;
	a.c = 'b';
	f(&a);
	printf("%d,%c", a.x, a.c);

	system("pause");
	return 0;
}