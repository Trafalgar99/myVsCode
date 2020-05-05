#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s, t;
	while (cin >> s >> t)
	{
		int i, j, x, y;
		for (i = 0; i < s.length(); i++)
		{
			bool flag = true;
			for (int j = 0; j < t.length() && i + j < s.length(); j++)
			{
				if (s[i + j] == '2' && t[j] == '2')
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
		x = max(s.length(), t.length() + i);
		i = j = 0;
		for (i = 0; i < t.length(); i++)
		{
			bool flag = true;
			for (int j = 0; j < s.length() && i + j < t.length(); j++)
			{
				if (t[i + j] == '2' && s[j] == '2')
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
		y = max(t.length(), s.length() + i);
		i = j = 0;
		cout << min(x, y);


	}
	return 0;
}