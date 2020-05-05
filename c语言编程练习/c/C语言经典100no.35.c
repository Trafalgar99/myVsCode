//题目：求100之内的素数。

#include<stdio.h>
#include<stdlib.h>

#define N 100

int main() {
	int i;
	for (i = 0; i < N; i++) {
		int flag = 1;
		if (i == 0 || i == 1) {
			flag = 0;
		}
		else{
			
			for (int j = 2; j < i; j++) {
				if (0 == i % j) {
					flag = 0;
				}
			}
			if (flag) {
				printf("%d ", i);
			}
		}

	}

	system("pause");
	return 0;
}