#include <stdio.h>
#include<stdlib.h>

//��1��.��101��������������50�������������Σ�1����������һ�Σ� �ҳ�������һ�ε��Ǹ�����

int main() {

	int i, k = 0, a[101];
	for (i = 0; i < 100; i++) {			//��������������ֵ

		if (i < 50) {
			a[i] = i + 1;

		}
		else {
			a[i] = i - 49;
		}
	}
	a[100] = 51;
	for (i = 0; i < 101; i++) {
		k = k ^ a[i];			//��λ������㽻����
	}

	printf("%d\n", k);

	system("pause");
	return 0;



}
