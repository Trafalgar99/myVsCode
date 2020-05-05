#include<iostream>
using namespace std;
#include<cstdio>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<vector>
#include<string>
#include<cstdio>
#include<cmath>

void test01()
{
	int m, n;
	cin >> m >> n;
	vector< vector<int> > v(m, vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<vector<int> >v2 = v;
	for (int i = 0; i < m; ++i)
	{
		sort(v2[i].begin(), v2[i].end());
		cout << v2[i][n - 1] << " ";
	}
	cout << endl;

	vector<int>v3;
	for (int i = 0; i < n; ++i)
	{
		v3.clear();
		for (int j = 0; j < m; ++j)
		{
			v3.push_back(v[j][i]);
		}
		sort(v3.begin(), v3.end());
		cout << v3[0] << " ";

	}
}
void test02()
{
	//medium
	int n;
	cin >> n;
	vector< vector<int> >v(2 * n - 1, vector<int>(2 * n - 1));
	int m = 1;
	int k = 0;
	int l = 2 * n - 1;
	while (m <= n)
	{
		for (int i = k; i < l; ++i)
		{
			for (int j = k; j < l; ++j)
			{
				if (i == k || i == l - 1 || j == k || j == l - 1)
				{
					v[i][j] = m;
				}
			}
		}
		m++;
		k++;
		l--;
	}
	for (int i = 0; i < (2 * n - 1); ++i)
	{
		for (int j = 0; j < (2 * n - 1); ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
void test03()
{
	//medieum
	string s;
	cin >> s;
	for (int i = 0; i < (int)s.size(); ++i)
	{
		if (s[i] <= 'z' && s[i] >= 'w')
		{
			s[i] = s[i] - 'w' + 'a';
		}
		else if (s[i] >= 'W' && s[i] <= 'Z')
		{
			s[i] = s[i] - 'W' + 'A';
		}
		else
		{
			s[i] += 4;
		}
	}
	cout << s;
}

void test04()
{
	int n;
	scanf("%d", &n);
	int i, j;
	int arr[100][100] = { 0 };
	int m = 1;
	int k = 0;

	while (m <= n)
	{
		for (int i = m - 1; i < 2 * n - 1 - (m - 1); i++)
		{
			for (int j = m - 1; j < 2 * n - 1 - (m - 1); j++)
			{
				if (i == m - 1 || i == 2 * n - 2 - (m - 1) || j == m - 1 || j == 2 * n - 2 - (m - 1))
				{
					arr[i][j] = m;
				}

			}
		}
		m++;
	}

	for (i = 0; i < 2 * n - 1; i++)
	{
		for (j = 0; j < 2 * n - 1; j++)
		{
			printf("%3d",arr[i][j]);
		}
		cout << endl;
	}
}
int C(int x,int y)  //利用组合数的性质递归的求解组合数
{
	if (y == 0 || y == x)
	{
		return 1;
	}
	
		return (C(x - 1, y - 1) + C(x - 1, y));
	
}
int main()
{
	//test04();
	cout << C(5, 2);
	return 0;
}
	