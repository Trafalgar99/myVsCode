#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isPrime(int n)
{
	if (n == 1 || n == 2)
	{
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	if (n < 4)
	{
		cout << '0';
		return 0;	
	}
	int cnt = 0;
	vector<int>prime;
	for (int i = 3; i < n; i++)
	{
		if (isPrime(i))
		{
			prime.push_back(i);
		}
	}
	for (int i = 0; i < prime.size()-1; i++)
	{
		if (prime[i] + 2 == prime[i + 1])
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}