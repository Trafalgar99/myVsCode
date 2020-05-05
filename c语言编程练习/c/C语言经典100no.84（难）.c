//题目：一个偶数总能表示为两个素数之和(输入一个大于二的偶数，将他表示成两个素数之和)。


#include<stdio.h>
#include <math.h>

	int ver(int num)
	{
		for (int i = 2; i <= sqrt(num); ++i)
		{
			if (num % i == 0)
			{
				return 0;
			}
		}
		return 1;

	}

	int main()
	{
		int n;
		scanf("%d", &n);

		if (n % 2 != 0 || n == 2)
		{
			printf("请输入一个大于2的偶数！\n");
		}
		else
		{
			for (int i = 2; i < n; ++i)
			{
				if (ver(i) && ver(n - i))
				{
					printf("%d = %d + %d\n", n, i, n - i);
					return 0;
				}
			}
		}

	}