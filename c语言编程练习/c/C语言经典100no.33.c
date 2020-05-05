//题目：判断一个数字是否为质数（素数）。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf_s("%d", &n);
	if (0 == n || 1 == n) {
		
			printf("不是素数\n");
		
		
	}
	else if (2 == n) {
		printf("是素数\n");
	}
	else{
		for (int i = 2; i < n; i++) {
			if (0 == n % i) {
				printf("不是素数\n");
				break;
			}
			else if (i == n - 1) {
				printf("是素数\n");
				break;
			}
		}

	}
	

	/*int n;
	scanf("%d", &n);
	int flag = 1;

	if (n <= 0)
	{
		flag = 0;
	}

	for (int i = 2; i < sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数");
	}*/

	return 0;
	system("pause");
	return 0;
}