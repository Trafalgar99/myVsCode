//题目：判断一个素数能被几个9整除。

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ver(int num)
{
	if (num < 2)
	{
		printf("请输入一个素数！\n");
		return 0;
	}
	for (int i = 2; i < sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			printf("请输入一个素数！\n");
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if (ver(n))
	{
		int x;
		for (x = 9; x % n != 0; x = x * 10 + 9)
		{
			if (x > 1000000000)
			{
				printf("在指定范围没有满足的数。\n");
				return 0;
			}
		}
		printf("该素数可以被%d整除。\n", x);
	}

	system("pause");
	return 0;
}