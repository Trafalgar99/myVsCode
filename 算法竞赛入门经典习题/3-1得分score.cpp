#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*�÷֣�Score��ACM/ICPC Seoul 2005,UVa1585��
����һ����O�� X��ɵĴ�������Ϊ1-80���������ʮ����,ͳ�Ƶ÷֡�ÿ��O�ĵ÷�ΪĿǰ�������ֵ�O�ĸ�����X �ĵ÷�Ϊ0��
��������
2
OOXXOXXOOO
OOOOOXXOXOXOXOXOXO
�������
1+2+0+0+1+0+0+0+1+2+3=10
1+2+3+4+5+0+0+1+0+1+0+1+0+1+0+1+0+1=21
*/

int main()
{
	char s[85];
	scanf("%s", s);
	int Ocnt = 0, Xcnt = 0;
	int sum = 0;
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] == 'X')
		{
			Ocnt = 0;
			printf("%d", 0);
		
		}
		else
		{
		
			printf("%d", ++Ocnt);
			sum += Ocnt;
		}
		if (i + 1 != strlen(s))
			printf("+");
	}
	printf("=%d", sum);
	return 0;
}