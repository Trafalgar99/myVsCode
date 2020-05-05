#include<stdio.h>

int main()
{
	char arr[81] = "\0";
	gets(arr);
	int cnt = 0;
	int i = 0;
	int f = 0;
	while (arr[i] != 0)
	{
		if (arr[i] == ' ')
		{
			f = 1;
		}
		cnt++;
		i++;
	}
	if (f == 0)
	{
		for (int i = 0; i < cnt; i++)
		{
			printf("%c", arr[i]);
		}
		return 0;
	}
	int j, k;
	for (i = cnt - 1; i >= 0; i--)
	{
		if (arr[i] == ' ')
		{
			j = i + 1;
			for (; arr[j] != ' ' && arr[j] != '\0'; j++)
			{
				printf("%c", arr[j]);
			}
			printf(" ");
		}
	}
	for (k = i + 1; arr[k] != ' '; k++)
	{
		printf("%c", arr[k]);
	}
	return 0;
}