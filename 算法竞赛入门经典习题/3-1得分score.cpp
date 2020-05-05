#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*得分（Score，ACM/ICPC Seoul 2005,UVa1585）
给出一个由O和 X组成的串（长度为1-80），最多有十个串,统计得分。每个O的得分为目前连续出现的O的个数，X 的得分为0；
样例输入
2
OOXXOXXOOO
OOOOOXXOXOXOXOXOXO
样例输出
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