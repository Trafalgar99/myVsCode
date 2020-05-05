#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s = "1";
	for (int i = 1; i < n; i++)
	{
		string ns = "";
		for (int j = 0; j < s.size();)
		{
			int u = j;
			while (u < s.size()&& s[u] == s[j])
			{
				u++;
			}
			ns += to_string(u - j);
			ns += s[j];
			j = u;
		}
		s = ns;
	}
	cout << s;

	return EXIT_SUCCESS;
}