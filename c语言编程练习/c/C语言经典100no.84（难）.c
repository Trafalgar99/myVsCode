//��Ŀ��һ��ż�����ܱ�ʾΪ��������֮��(����һ�����ڶ���ż����������ʾ����������֮��)��


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
			printf("������һ������2��ż����\n");
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