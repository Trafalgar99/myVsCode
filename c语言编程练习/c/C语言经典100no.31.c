//��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

#include<stdio.h>

int main()
{
	char c1, c2;
	scanf_s("%c", &c1);
	switch (c1)
	{
	case 'M':
		printf("Monday");
		break;
	case 'T':
		getchar();
		scanf_s("%c", &c2);
		if (c2 == 'u')
		{
			printf("Tuesday");
		}
		else
		{
			printf("Thursday");
		}
		break;
	case 'W':
		printf("Wednesday");
		break;
	case 'F':
		printf("Friday");
		break;
	case 'S':
		getchar();
		scanf_s("%c", &c2);
		if (c2 == 'a')
		{
			printf("Saturday");
		}
		else
		{
			printf("Sunday");
		}
		break;
	}

	return 0;
}