//题目：求一个3*3矩阵对角线元素之和。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[3][3] = { 0 };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d",&arr[i][j]);		//每个数字之间用空格隔开
			if (i == j) {
				sum = sum + arr[i][j];
			}
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}