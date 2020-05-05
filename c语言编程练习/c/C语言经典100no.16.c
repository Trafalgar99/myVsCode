题目：输入两个正整数m和n，求其最大公约数和最小公倍数。 最小公倍数* 最大公约数 = m * n

#include<stdio.h>
#include<stdlib.h>

int main() {
	int m, n;
	
	while (scanf_s("%d%d", &m, &n) != EOF) {
		int min = m > n ? n : m;
		int max = m < n ? n : m;
		for (int i = min; i >=1; i--) {
			if (0 == m % i && 0 == n % i) {
				printf("%d\n", i);
				break;
			}
		}
		for (int j = 1;; j++) {
			if (0 == j * max % min) {
				printf("%d\n", j * max);
				break;
			}
		}
	}


	system("pause");
	return 0;
}
