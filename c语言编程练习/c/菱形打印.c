#include<stdio.h>

int f(int x) {
	int i;
	int ret=0;
	for (; x > 0;  x/= 10) {
		ret++;
	}
	return ret;
}
int mypow(int x) {
	int ret = 1;
	for (int i = 0; i < x; i++) {
		ret *= 10;
	}
	return ret;
}

int main() {
	int a, b;
	int cnt = 0;
	int sum;
	scanf_s("%d%d", &a, &b);
	sum = a + b;
	for (int i = sum; i > 0;) {
		printf("%d", i / mypow(f(i) - 1));
		cnt++;
		if (0 == cnt % 3) {
			printf(",");
		}
		i %= mypow(f(i) - 1);
	}





	return 0;
}