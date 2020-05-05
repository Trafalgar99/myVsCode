//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int cnt = 0;
	while (scanf_s("%d", &n) != EOF) {
		while (n) {
			int pot = n % 10;
			n /= 10;
			printf("%d",pot);
			cnt++;

		}
		printf("\n共有%d位\n", cnt);
		cnt = 0;

	}


	system("pause");
	return 0;
}