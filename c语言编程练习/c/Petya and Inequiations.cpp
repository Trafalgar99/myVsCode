#include<iostream>
using namespace std;

int main()
{
	long long n,x, y;
	while (cin >> n >> x >> y)
	{
		if (y >= n)
		{
			long long temp = y - (n - 1);
			if (temp * temp + (n - 1) >= x)
			{
				cout << temp << endl;
				for (int i = 0; i < n - 1; i++)
					cout << 1 << endl;
			}
			else
				cout << -1 << endl;
		}
		else
			cout << -1 << endl;
		
	}



	return 0;
}