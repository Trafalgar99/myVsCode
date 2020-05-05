//题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include<stdio.h>
#include<stdlib.h>
#define N 10
#define SWAP(a,b) {int tem;tem=a;a=b;b=tem;}

void maxpos(int* arr, int n) {
	int max = arr[0];
	int pos = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			pos = i;
		}
	}
	arr[0] = arr[pos];
}

void minpos(int* arr, int n) {
	int min = arr[0];
	int pos = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			pos = i;
		}
	}
	arr[n-1] = arr[pos];
}
int main(int argc,char**argv) {
	int arr[N] = {0};
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	maxpos(arr, N);
	minpos(arr, N);
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}