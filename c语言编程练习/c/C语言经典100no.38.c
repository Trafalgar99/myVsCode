//��Ŀ����һ��3*3����Խ���Ԫ��֮�͡�

#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[3][3] = { 0 };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d",&arr[i][j]);		//ÿ������֮���ÿո����
			if (i == j) {
				sum = sum + arr[i][j];
			}
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}