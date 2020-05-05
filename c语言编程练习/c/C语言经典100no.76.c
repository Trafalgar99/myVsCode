//题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函
//数1/1+1/3+...+1/n(利用指针函数)。

#include<stdio.h>
#include<stdlib.h>

double even(int n) {
	double sum = 0;
	for (int i = 2; i <= n; i += 2) {
		sum += 1.0 / i;
	}
	return sum;
}
double odd(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i += 2) {
		sum += 1.0 / i;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	double(* pf)(int);
	if (n % 2) {
		pf = odd;
	}
	else {
		pf = even;
	}

	printf("%lf", (*pf)(n));
	system("pause");
	return 0;
}