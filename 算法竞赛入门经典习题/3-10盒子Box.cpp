#include<iostream>

#include<algorithm>


using namespace std;


bool cmp(int a, int b)
{
	return a > b;
}


int main()
{
	int a[10005] = { 0 };
	int x;
	for (int i = 0; i < 12; i++)
	{
		cin >> x;
		a[x]++;
	}
	sort(a, a + 10000, cmp);
	int flag = 1;
	for (int i = 0; i <3; i++)
	{
		if (a[i] % 4 != 0)
		{
			flag == 0;
			break;
		}
	}
	if (flag)
	{
		cout << "POSSIBLE";
	}
	else
	{
		cout << "IMPOSSIBLE";
	}
	return 0;
}