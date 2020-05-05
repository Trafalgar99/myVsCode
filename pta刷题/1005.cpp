#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

//��ȡһ������(3n+1)��
int text(int n)
{
	if (n % 2 == 0)
	{
		return n / 2;
	}
	else
	{
		return (3 * n + 1) / 2;
	}
}

int main()
{
	int n;
	cin >> n;

	//��ȡ���ݣ���vector�洢
	vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}

	//�����ݽ��д���
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == -1)
		{
			continue;
		}
		//�ж�ÿ�����ģ�3n+1�����ڲ���nums�����ڣ���Ϊ-1
		int tool = nums[i];
		while (tool != 1)
		{
			tool = text(tool);
			vector<int>::iterator pos = find(nums.begin(), nums.end(), tool);
			if (pos!=nums.end())
			{
				*pos = -1;
			}
		}
	}

	//������Ӧ�ð���Ч��Ԫ�شӴ�С�ź�
	sort(nums.begin(), nums.end(), greater<int>());

	//����Ҫ��ĸ�ʽ���
	for (int i = 0; i < n; i++)
	{
		if(nums[i]!=-1)
			if (nums[i + 1] == -1)
			{
				cout << nums[i] ;
			}
			else
			{
				cout << nums[i] << " ";
			}
				
	}

	return 0;
}