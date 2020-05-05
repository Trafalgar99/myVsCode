#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[100001];
	long long int sum = 0,temp=0,cnt;
	cin >> a;
	int len = strlen(a);
	if (len == 1)
	{
		cout << "0" << endl;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			sum += a[i] - '0';
		}
		cnt = 1;
		while (sum > 9)
		{
			temp = sum;
			sum = 0;
			while (temp)
			{
				sum += temp % 10;
				temp /= 10;
			}
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}