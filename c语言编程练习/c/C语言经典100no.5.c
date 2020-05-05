//题目：输入三个整数x, y, z，把这三个数由小到大输出。

#include <stdio.h>
#include<stdlib.h>

#define  SWAP(a, b){int tmp;tmp=a;a=b;b=tmp;}//本题亦可使用函数，指针等方法

int main() {
	int x, y, z;
	while (scanf_s("%d%d%d", &x, &y, &z) != EOF) {
		if (x > y) {
			SWAP(x, y);
		}
		if (y > z) {
			SWAP(y, z);
		}
		if (x > y) {
			SWAP(x, y);
		}
		printf("%d %d %d\n", x, y, z);
	}
	system("pause");
	return 0;
}
