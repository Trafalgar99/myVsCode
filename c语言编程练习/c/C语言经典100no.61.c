//题目：打印出杨辉三角形，10行。

#include<stdio.h>
#include<stdlib.h>
#define N 15

long int fact(int k) {
	long int ret=1;
	if (0 == k) {
		return 1;
	}
	else {
		for (int i = k; i > 1; i--) {
			ret = ret * i;
		}
		return ret;
	}
}

long long int c(int i, int j) {
	long long int ret;
	ret = fact(j) / (fact(i) * fact(j - i));
	return ret;
}

int main() {
	int i, j;
	int cnt;
	for (i = 0; i < N; i++) {
		for (j = 0; j < 10 - i; j++) {
			printf(" ");
		}
		for (j = 0,cnt=0; j < 2 * i + 1; j++) {
			if (0 == j % 2) {
				
					printf("%d", c(cnt, i));
			
				cnt++;
			}
			else {
				printf(" ");
			}
			
		}printf("\n");
	}
	system("pause");
	return 0;
}