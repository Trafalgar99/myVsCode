//��Ŀ����дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú�
//��1/1+1/3+...+1/n(����ָ�뺯��)��

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