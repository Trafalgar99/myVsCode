#include<stdio.h>

int f(int num, int base)
{
	int sum = 0;
	while (num)
	{
		sum += num % base;
		num /= base;
	}
	return sum;
}
int main()
{

	

		int n;
		int i;
		int sum = 0;
		scanf("%d", &n);
		for (i = 2; i < n; i++)
		{
			sum += f(n, i);
		}
		n -= 2;

		for (i = (sum > n ? n : sum); i > 0; i--)
		{
			if (n % i==0 && sum % i==0)
			{
				break;
			}
		}
		printf("%d/%d", sum / i, n / i);
		return 0;
}