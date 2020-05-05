#include<iostream>

using namespace std;

int a[10];
void cnt(int n)
{
	while (n)
	{
		a[n % 10]++;
		n /= 10;
	}
}


int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		memset(a, 0, sizeof(a));
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			cnt(i);
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}

int arr[10005][10];

void calculate(int n)
{
	


}

void pratice()
{


	return;
}