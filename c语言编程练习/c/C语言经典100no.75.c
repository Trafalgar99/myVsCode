//题目：输入一个整数，并将其反转后输出（反转过后仍然唯一整数）。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num;
	int result=0;
	scanf("%d", &num);
	for (;num>0;num/=10) {
		int digit;
		digit = num % 10;
		result = result * 10 + digit;
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}