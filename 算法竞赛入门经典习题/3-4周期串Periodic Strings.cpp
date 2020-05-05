#include<iostream>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	char s[85];
	while (T--)
	{
		memset(s, 0, sizeof(s));
		scanf("%s", s);
		int len = strlen(s);
		for (int i = 1; i <= len; ++i)
		{
			int j;
			if (len % i==0)
			{
				for ( j = i; j <= len; ++j)
				{
					if (s[j] != s[j % i])
					{
						break;
					}
				}
				if (j == len)
				{
					cout << i << endl;
					break;
				}

			}
		}
		if (T) cout << endl;
	}


	return 0;
}

void practice()
{
	char line[1024];
	scanf("%d", line);
	int len = strlen(line);
	int i;
	for ( i = 1; i <= len; i++)
	{
		if (len % i)
		{
			continue;
		}
		bool flag = true;
		for (int j = 0; j < len; j++)
		{
			for (int k = j + i; j < len; j += i)
			{
				if (line[j] != line[k])
				{
					flag = false;
				}
			}
			if (flag == false)
			{
				break;
			}
		}
		if (flag == true)
		{
			printf("%d", i);
			break;
		}
	}
	

	return;
}