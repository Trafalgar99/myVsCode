#include<stack>
#include<queue>
#include<iostream>
#include<cstdio>

using namespace std;

bool checkIsValidOrder(queue<int>& order)
{
	stack<int> s;
	int n = order.size();
	for (int i = 0; i <= n; ++i)
	{
		s.push(i);
		while (!s.empty()&&order.front()==s.top())
		{
			s.pop();
			order.pop();
		}
	}
	if (!s.empty())
	{
		return false;
	}
	return true;
}

int main()
{
	int n;
	int train;
	scanf("%d", &n);
	while (n)
	{
		scanf("%d", &train);
		while (train)
		{
			queue<int> order;
			order.push(train);
			for (int i = 1; i < n; ++i)
			{
				scanf("%d", train);
				order.push(train);
			}
			if (checkIsValidOrder(order))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
			scanf("%d", &train);
		}
		printf("\n");
		scanf("%d", &n);
	}


	return EXIT_SUCCESS;
}