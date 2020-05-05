#include<iostream>
#include<ctype.h>
#include<cstring>


using namespace std;

#define _for(i,a,b) for(int i=(a);i<(b);++i)

int main()
{
	int T, cnt, sz;
	double w[256],ans;
	char buf[256],c,s;
	w['C'] = 12.01;
	w['H'] = 1.008;
	w['O'] = 16.0;
	w['N'] = 14.01;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", buf);
		ans = 0;
		s = 0; cnt = -1; sz = strlen(buf);
		_for(i, 0, sz)
		{
			char c = buf[i];
			if (isupper(c))
			{
				if (i)
				{
					if (cnt == -1) cnt = 1;
					ans += w[s] * cnt;
				}
				s = c;
				cnt = -1;
			}
			else
			{
				//assert(isdigit(c));
				if (cnt == -1) cnt = 0;
				cnt = cnt * 10 + c - '0';
			}
		}
		if (cnt == -1) cnt = 1;
		ans += w[s]*cnt;
		printf("%.3lf\n", ans);
	}
	return 0;
}

void practice()
{
	int w[265] = { 0 };
	char buf[256];
	int t;
	int sum = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", buf);
		char c,s;
		int num=0;
		for (int i = 0; i < strlen(buf); i++)
		{
			c = buf[i];
			if (isupper(c))
			{
				if (i != 0)
				{
					if (num = 0)
					{
						num = 1;
					}
					sum += w[s] * num;
				}
				s = c;
				num = 0;
			}
			else
			{
				num = num*10 + c - '0';

			}


		}
		if (isupper(c))
		{
			sum += w['c'];
		}
		else
		{
			sum += w['s'] * num;
		}




	}




	return;
}