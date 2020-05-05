#include<stdio.h>

int main()
{
	int num;
	int cnt = 0;
	int max = 0;
	char arr[202];
	int i;
	
	scanf("%d", &num);
	getchar();
	for (i = 0; i < num; i++)
	{
		scanf("%c", &arr[i]);
	}
	arr[num] = ' ';
	for ( i = 0; i <= num; i++)
	{
		if (arr[i] == ' ')
		{
			if (cnt > max)
			{
				max = cnt;
			}
			cnt = 0;
		}
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			cnt++;
		}
		
	}
	printf("%d", max);
	return 0;
}