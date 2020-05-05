#include<stdio.h>
#include<string.h>
#include<math.h>

#define LL long long
char s[100010];
char word[100010];
int num[100010];
int change()
{
	int len = strlen(word);
	if (len < 3)
		return 0;
	if (strcmp(word + len - 4, "lios") == 0)
		return 1;
	if (strcmp(word + len - 5, "liala") == 0)
		return -1;
	if (strcmp(word + len - 3, "etr") == 0)
		return 2;
	if (strcmp(word + len - 4, "etra") == 0)
		return -2;
	if (strcmp(word + len - 6, "initis") == 0)
		return 3;
	if (strcmp(word + len - 6, "inites") == 0)
		return -3;
	return 0;
}
int main()
{
	while (gets(s))
	{
		int tp = 0, flag = 1, i, len = strlen(s), t, p = 0, cnt = 0;
		for (i = 0; i <= len; i++)
		{
			if (s[i] != ' ' && s[i] != '\0')
			{
				word[p++] = s[i];
			}
			else
			{
				word[p] = '\0';
				t = change();
				cnt++;
				if (t != 0)
					num[tp++] = t;
				else
				{
					flag = 0;
					break;
				}
			}
		}
		//printf("%d\n",cnt);
		if (cnt == 1 && flag == 1)
		{
			puts("YES");
			continue;
		}
		if (flag == 0)
		{
			puts("NO");
			continue;
		}
		cnt = 0;
		for (i = 0; i < tp; i++)
			if (abs(num[i]) == 2)
				cnt++;
		if (cnt != 1)
		{
			puts("NO");
			continue;
		}
		flag = 1;
		if (num[0] < 0)
		{
			for (i = 1; i < tp; i++)
				if (num[i] > 0)
				{
					flag = 0;
					break;
				}
		}
		else
		{
			for (i = 1; i < tp; i++)
				if (num[i] < 0)
				{
					flag = 0;
					break;
				}
		}
		if (flag == 0)
		{
			puts("NO");
			continue;
		}
		flag = 1;
		for (i = 1; i < tp; i++)
		{
			if (abs(num[i]) < abs(num[i - 1]))
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
