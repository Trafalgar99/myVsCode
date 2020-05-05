//题目：学习static定义静态变量的用法。

#include<stdio.h>

void f()
{
	int i = 0;
	static int si = 0;
	printf("i=%d\n", i);
		printf("static si = %d\n", si);		//static定义的局部变量在函数结束时不会消失
	si++;									//而普通变量在函数结束时会消失
	i++;
}

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		f();
	}

	return 0;
}