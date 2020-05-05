#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//处理个位
	int num1 = n % 10;
	string min="";
	for (int i = 1; i < num1+1; i++)
	{
		min += i + '0';
	}

	//处理十位
	string mid = "";
	int num2 = n / 10 % 10;
	for (int i = 0; i < num2; i++)
	{
		mid += 'S';
	}
	
	//处理百位
	string max = "";
	int num3 = n / 100;
	for (int i = 0; i < num3; i++)
	{
		max += "B";
	}
	
	//三者拼接
	string result = max + mid + min;
	cout << result;

	return 0;
}