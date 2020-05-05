#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define LL long long
int a[100050];
int b[100050], c[100050];
int abs(int a)
{
	if (a < 0)
		return -a;
	else
		return a;
}
int main()
{
	int n;
	while (scanf("%d", &n) != -1)
	{
		memset(c, 0, sizeof(c));
		memset(b, 0, sizeof(b));
		for (LL i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 1; i < n; i++)
		{
			if (i % 2 == 1)
			{
				b[i] = abs(a[i] - a[i + 1]);
				c[i] = -abs(a[i] - a[i + 1]);
			}
			else
			{
				b[i] = -abs(a[i] - a[i + 1]);
				c[i] = abs(a[i] - a[i + 1]);
			}
		}
		LL maxn = 0, maxn1 = 0, sum = 0, sum1 = 0;
		for (int i = 1; i < n; i++)
		{
			if (sum > 0)
			{
				sum += b[i];
			}
			else
			{
				sum = b[i];
			}
			maxn = max(maxn, sum);
		}
		for (int i = 1; i < n; i++)
		{
			if (sum1 > 0)
			{
				sum1 += c[i];

			}
			else
				sum1 = c[i];
			maxn1 = max(maxn1, sum1);
		}
		printf("%lld\n", max(maxn, maxn1));
	}
}
