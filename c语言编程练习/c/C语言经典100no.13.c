//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方。

#include<stdio.h>
#include<stdlib.h>

int tri(int a) {
	int a1 = a % 10;
	int a2 = a / 100;
	int a3 = (a / 10) % 10;
	int ret;
	ret = a1 * a1* a1+a2*a2*a2+a3*a3*a3;

	return ret;
}

int main() {
	int i;
	for (i = 153; i < 1000; i++) {
		if (i ==tri(i) ) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}