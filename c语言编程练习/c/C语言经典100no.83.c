//题目：求0—7所能组成的奇数个数。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int sum = 0, cnt = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (i == 0)
		{
			cnt = 4;
		}
		else if (i == 1)
		{
			cnt *= 7;
		}
		else
		{
			cnt *= 8;
		}
		sum += cnt;
		printf("%d位数为奇数的个数为%d\n", i + 1, cnt);
	}

	printf("总数为%d\n", sum);
	system("pause");
	return 0;
}