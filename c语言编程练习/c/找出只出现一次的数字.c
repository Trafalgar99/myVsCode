#include <stdio.h>
#include<stdlib.h>

//（1）.有101个整数，其中有50个数出现了两次，1个数出现了一次， 找出出现了一次的那个数。

int main() {

	int i, k = 0, a[101];
	for (i = 0; i < 100; i++) {			//将数组中填满数值

		if (i < 50) {
			a[i] = i + 1;

		}
		else {
			a[i] = i - 49;
		}
	}
	a[100] = 51;
	for (i = 0; i < 101; i++) {
		k = k ^ a[i];			//按位异或满足交换律
	}

	printf("%d\n", k);

	system("pause");
	return 0;



}
