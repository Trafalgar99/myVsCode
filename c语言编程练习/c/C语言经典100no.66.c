//��Ŀ������3����a,b,c������С˳�������

#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
		if (b > a) {
			swap(&a, &b);
		}
		if (c > a) {
			swap(&a, &c);
		}
		if (c > b) {
			swap(&c, &b);
		}
		printf("%d%d%d", a, b, c);

	
	system("pause");
	return 0;
}