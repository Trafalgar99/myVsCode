#include<stdio.h>

int main()
{
	int x[105], n;
	while (~scanf("%d", &n))
	{
		int sum = 0, cnt = 0, i;
		for (i = 0; i < n; ++i)
		{
			scanf("%d", x + i);		
			sum += x[i];
		}
		for (i = 0; i < n; ++i)
		{
			if ((sum - x[i]) % 2 == 0)
			{
				++cnt;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
