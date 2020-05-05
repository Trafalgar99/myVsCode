#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		sum += str[i] - '0';
	}

	//cout << sum<<' ';
	
	int num[99],j=0;
	while (sum)
	{
		num[j] = sum % 10;
		sum = sum / 10;
		j++;
	}

	/*for (int i = 0; i < j; i++)
	{
		cout << num[i]<<' ';
	}*/

	string pinyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for (int i = j - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			cout << pinyin[num[i]];
		}
		else
		{
			cout << pinyin[num[i]] << ' ';
		}
	}
	return 0;

}