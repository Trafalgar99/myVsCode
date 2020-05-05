#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	
	int n;
	vector<int>v;
	
	cin >> n;
	while (n)
	{
		int num = n % 10;
		v.push_back(num);
		n /= 10;
	}

	sort(v.begin(), v.end());
	cout << v.back() << endl;
	
	system("pause");

	return 0;
}