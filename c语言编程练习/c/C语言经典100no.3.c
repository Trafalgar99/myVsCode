//题目：一个整数，它加上100后是一个完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i,j;
	int x;
	for (x = 0;; x++) {
		if (!(sqrt(x + 100) - (int)sqrt(x + 100)) && !(sqrt(x + 268) - (int)sqrt(x + 268)) ){
			break;
		}
	}
	printf("%d", x);
	system("pause");
	return 0;
}
