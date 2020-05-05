#include<iostream>
using namespace std;
//¼òµ¥Ìâ
int main()
{
	int n, a, b;
	while (cin >> n >> a >> b)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (i >= a && n - i - 1 <= b)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}