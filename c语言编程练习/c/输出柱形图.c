#include <stdio.h>
#include<stdlib.h>

//2.	从键盘上输入字符，（1）分别统计一下其中字母，数字，其他字符的个数， 
//（2）将统计的字母，数字，其他字符的个数以柱状图的形式打印。例如
 
int main() {
	int* p[3] = { "alp","num","oth" };
	int a[3] = { 0 };
	int i, j, tem;
	char* ptem;
	char c;
	while (scanf_s("%c", &c) != EOF) {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			a[0]++;
		}
		else if (c >= '0' && c <= '9') {
			a[1]++;
		}
		else {
			if (c == '\n') {
				break;
			}
			a[2]++;
		}
	}
	for (i = 3; i > 1; i--) {
		for (j = 0; j < i - 1; j++) {
			if (a[j] < a[j + 1]) {
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;

				ptem = p[j];
				p[j] = p[j + 1];
				p[j + 1] = ptem;
			}
		}
	}
	for (i = 0; i <= a[0]; i++) {
		if (0 == i) {
			printf("%3d   ", a[0]);
		}
		else {
			printf("***** ");
		}
		if (a[0] - a[1] == i) {
			printf("%3d   ", a[1]);
		}
		else if (i > a[0] - a[1]) {
			printf("***** ");
		}
		if (a[0] - a[2] == i) {
			printf("%3d   ", a[2]);
		}
		else if (i > a[0] - a[2]) {
			printf("***** ");
		}
		printf("\n");
	}

	printf("%4s  %4s  %4s  \n", p[0], p[1], p[2]);

	system("pause");
	return 0;
}