#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

//获取一个数的(3n+1)数
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

	//获取数据，用vector存储
	vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}

	//对数据进行处理
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == -1)
		{
			continue;
		}
		//判断每个数的（3n+1）数在不在nums里，如果在，置为-1
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

	//由题意应该把有效的元素从大到小排好
	sort(nums.begin(), nums.end(), greater<int>());

	//按照要求的格式输出
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