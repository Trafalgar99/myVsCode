//��Ŀ���ж�һ�������ܱ�����9������

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ver(int num)
{
	if (num < 2)
	{
		printf("������һ��������\n");
		return 0;
	}
	for (int i = 2; i < sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			printf("������һ��������\n");
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
				printf("��ָ����Χû�����������\n");
				return 0;
			}
		}
		printf("���������Ա�%d������\n", x);
	}

	system("pause");
	return 0;
}