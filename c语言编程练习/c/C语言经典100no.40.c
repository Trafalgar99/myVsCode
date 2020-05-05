//题目：将一个数组逆序输出。

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d ", arr[i]);
	}
	printf("\n");
}

void antiprint(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		printf("%3d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int n;
	scanf_s("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	srand(time(NULL));


	for (int i = 0; i < n ; i++) {
		arr[i] = rand() % 100;
	}
	print(arr, n);
	antiprint(arr, n);


	system("pause");
	return 0;
}