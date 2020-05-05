
#include<cstdio>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	char aa;
	int da;
}; char a[111111];
bool cp(node x, node y)
{
	return x.da > y.da;
}
int main() {
	int k;

	while (cin >> a >> k)
	{
		if (k >= strlen(a))
		{
			cout << "0" << endl;
		}
		else {
			int vis[27];
			memset(vis, 0, sizeof(vis));
			node pr[27];
			int l = strlen(a);
			for (int i = 0; i < 26; i++)
			{
				pr[i].aa = 'a' + i;
				pr[i].da = 0;
			}
			for (int i = 0; i < l; i++)
			{
				pr[a[i] - 'a'].da++;
			}
			sort(pr, pr + 26, cp);
			int js = 0;
			for (int i = 25; i >= 0; i--)
			{
				if (k - pr[i].da >= 0)
				{
					k -= pr[i].da;
					vis[pr[i].aa - 'a'] = 1;
				}
				else break;
			}
			for (int i = 0; i < 26; i++)
			{
				if (vis[i] == 0)js++;
			}
			cout << js << endl;

			for (int i = 0; i < l; i++)
			{
				if (vis[a[i] - 'a'] == 0)
					printf("%c", a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}