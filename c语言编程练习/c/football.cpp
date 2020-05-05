//简单题
//给定一串0101组合，判断是否有连着7个0或者7个1
#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
	int cnt1=0;
	int cnt0 = 0;
	int i;
	char player[100] ;
	cin.getline(player, 100);
	for (i = 0; player[i] != 0; i++)
	{
		if (player[i] == '0')
		{
			cnt1 = 0;
			cnt0++;
		}
		else
		{
			cnt0 = 0;
			cnt1++;
		}
		if (cnt0 == 7 || cnt1 == 7)
		{
			cout << "YES";
			break;
		}
	}
	if (player[i] == 0)
	{
		cout << "NO";
	}
	return 0;
}