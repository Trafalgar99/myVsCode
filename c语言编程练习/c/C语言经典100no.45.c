//题目：学习使用register定义变量的方法。

#include <stdio.h>
#include<time.h>

int main()
{
	long long int i;
	long long int sum = 0;
	time_t begin, after;
	begin=time(NULL);
	for (i = 0; i < 1000000; ++i)
	{
		sum += i;
	}
	 after=time(NULL);
	printf("%d\n", after - begin);
	printf("%lld\n", sum);

	return 0;
}