#include <cstdio>

int main()
{
	int m, n;
	char s1[70], s2[70], s3[70], s4[70];
	char week[7][5] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	while (~scanf("%s", s1))
	{
		scanf("%s", s2);
		scanf("%s", s3);
		scanf("%s", s4);
		int i = 0, f = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] == s2[i] && s1[i] >= 65 && s1[i] <= 'G')
			{
				if (f == 0)
				{
					printf("%s ", week[s1[i] - 65]);
					f = 1;
					++i;
					continue;
				}
			}
			if (s1[i] == s2[i] && f == 1)
			{
				if (s1[i] >= 48 && s1[i] <= 57)
				{
					printf("%02d", s1[i] - 48);
					break;
				}
				else if (s1[i] >= 'A' && s1[i] <= 'N')
				{
					printf("%02d", s1[i] - 65 + 10);
					break;
				}
			}
			++i;
		}
		i = 0;
		printf(":");
		while (s3[i] != '\0' && s4[i] != '\0')
		{
			if (s3[i] == s4[i] && (s3[i] >= 65 && s3[i] <= 90 || s3[i] >= 97 && s3[i] <= 122))
			{
				printf("%02d", i);
				break;
			}
			++i;
		}
	}
	return 0;
}
