#include<stdio.h>
#include<stdlib.h>

int main() {
	int dividend, divisor;
	scanf_s("%d/%d", &dividend, &divisor);
	int a = dividend;
	int b = divisor;
	int t;
	while (b > 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d/%d", dividend / a, divisor / a);
	system("pause");
	return 0;
}