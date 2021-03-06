#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
const int mod = 1e9 + 7;
#define LL long long
LL dp[300000][2];
int main()
{
	string a, b;
	int k;
	cin >> a >> b >> k;
	int lena = a.size();
	//int lenb = b.size();
	if (a == b)
		dp[0][0] = 1;
	else dp[0][1] = 1;
	int x = 0;
	for (int i = 0; i < lena; i++)
	{
		int flag = 1;
		for (int j = 0; j < lena; j++)
		{
			if (a[(i + j) % lena] != b[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			x++;
	}
	for (int i = 0; i < k; i++)
	{
		dp[i + 1][0] = (x * dp[i][1] + (x - 1) * dp[i][0]) % mod;
		dp[i + 1][1] = ((lena - x) * dp[i][0] + (lena - x - 1) * dp[i][1]) % mod;
	}
	printf("%lld\n", dp[k][0]);
}