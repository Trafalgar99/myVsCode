#include<stdio.h>

int main()
{
	int a, b, c, i;
	int sum = 0;
	scanf("%d%d%d", &a, &b, &c);
	for ( i = a; i > 0; i--)
	{

		if (2 * i <= b && 4 * i <= c)
		{
			sum = 7 * i;
			break;
		}
	}
	printf("%d", sum);

	return 0;
}