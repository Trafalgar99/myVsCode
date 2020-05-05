#include<stdio.h>
#include<string.h>

int main()
{
	char a[102];
	char b[102];
	int i;
	scanf("%s", &a);
	scanf("%s", &b);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		if (b[i] >= 'A' && b[i] <= 'Z')
		{
			b[i] = b[i] + 32;
		}
		if (a[i] > b[i])
		{
			printf("1\n");
			break;
		}
		else if (a[i] < b[i])
		{
			printf("-1\n");
			break;
		}
		else
		{
			continue;
		}
	}
	if (a[i] == '\0')
	{
		printf("0\n");
	}



	return 0;
}
