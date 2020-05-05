//题目：将一个正整数分解质因数。例如：输入90，打印出90 = 2*3*3*5。
//分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
//(1)n能被k整除，则应打印出k的值，并用n除以k的商，作为新的正整数n。重复执行。
//(2)如果n不能被k整除，则用k + 1作为k的值，重复执行第一步。

#include<stdio.h>
#include<stdlib.h>
int tool1(int b) {
	int i;
	
	if (b == 2) {
		return 1;
	}
	else {
		for (i = 2; i <= b; i++) {
			if (0 == b % i) {
				break;
			}
			else if (i >= b - 1) {
				return 1;
				break;
			}
		}
		return 0;
	}
	
}
int tool2(int a) {
	int i,s;
	for (i = 2; i < a; i++) {
		if (0 == a % i && tool1(i)) {
			s = i;
			break;
		}
	}
	return s;
}
int main() {
	int k;
	int num;
	scanf_s("%d", &num);
	k = tool2(num);
	while (k<=num) {
		if (num % k==0) {
			printf("%d ", k);
			num = num / k;
		}
		else {
			k = k + 1;
		}
	}
	system("pause");
	return 0;
}