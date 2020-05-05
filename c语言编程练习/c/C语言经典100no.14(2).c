#include<stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d = ", n);
	for (int i = 2; i <= n; ++i)
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1)
			{
				printf(" * ");
			}
		}
	}

	return 0;
}
