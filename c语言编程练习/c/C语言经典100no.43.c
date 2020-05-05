//题目：学习使用static的另一用法。

#include<stdio.h>
int main()
{
	int cnt = 5;
	for (int i = 0; i < 4; ++i)
	{
		printf("cnt 变量为 %d\n", cnt);
		cnt++;
		{
			static int cnt = 1;	//static定义了局部变量使该局部变量在其作用域恒有效，即便离开作用域
			printf("内置模块 cnt 变量为 %d\n", cnt);
			cnt++;
		}
	}
	return 0;
}