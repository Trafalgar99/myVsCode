//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。

#include<stdio.h>
#include<stdlib.h>

int add(int a,int n) {
	int s = 0;
	int ro = a;
	printf("s=");
	for (int i = 0; i < n; i++) {
		s = s + a;
		a = a * 10 + ro;
		printf("%d", a);
		if (i < n - 1) {
			printf("+");
		}
	}
	printf("=%d",  s);
}

int main() {
	int n;
	int a = 2;
	int s,result;
	while (scanf_s("%d%d", &a,&n) != EOF) {
		add(a, n);
	}
	system("pause");
	
	return 0;
}