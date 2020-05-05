#include<cstdio>
#include<cstring>

char num[1000001];

int main()
{
	scanf("%s", num);
	int len = strlen(num) - 1, count = 0;
	while (len)
	{
		if (num[len] == '0')
		{
			++count;
			for (; num[--len] == '0'; ++count)
				;
		}
		else
		{
			count += 2;
			for (; --len && num[len] == '1'; ++count)
				;
			if (len)
				num[len] = '1';
			else///连续读1读到最开头的情况，+1
				++count;
		}
	}
	printf("%d", count);
	return 0;
}