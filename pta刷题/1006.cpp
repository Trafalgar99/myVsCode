#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//�����λ
	int num1 = n % 10;
	string min="";
	for (int i = 1; i < num1+1; i++)
	{
		min += i + '0';
	}

	//����ʮλ
	string mid = "";
	int num2 = n / 10 % 10;
	for (int i = 0; i < num2; i++)
	{
		mid += 'S';
	}
	
	//�����λ
	string max = "";
	int num3 = n / 100;
	for (int i = 0; i < num3; i++)
	{
		max += "B";
	}
	
	//����ƴ��
	string result = max + mid + min;
	cout << result;

	return 0;
}