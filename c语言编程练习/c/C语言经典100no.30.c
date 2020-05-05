//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	 int n;
	while (EOF != scanf_s("%d", &n)) {
		 int sum = 0;
		for ( int i = n; i > 0; i /= 10)
		{
			sum = sum * 10 + i % 10;
		}
		if (sum == n)
		{
			printf("是回文数");
		}
		else
		{
			printf("不是回文数");
		}
		sum = 0;

	}
	
	system("pause");
	return 0;

}