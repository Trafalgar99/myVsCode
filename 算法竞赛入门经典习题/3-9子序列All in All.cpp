#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		string str1="", str2="";
		cin >> str1 >> str2;
		int i, j = 0;
		for (i = 0; i < str2.length(); i++)
		{

			if (str1[j] == str2[i])
			{
				j++;
			}
			if (j == str1.length())
			{
				break;
			}
		}
		if (i == str2.length()) cout << "No";
		else
		{
			cout << "Yes";
		}
	}
	


	return 0;
}