//题目：学习使用external的用法。

#include <stdio.h>
int a, b, c;

void add()
{
	extern int a;
	a = 1;
	c = a + b;
}

int main()
{
	a = b = 2;
	add();
	printf("c = %d\n", c);
	printf("a = %d\n", a);
	return 0;
}