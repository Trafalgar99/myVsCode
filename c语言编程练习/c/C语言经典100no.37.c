//题目：对10个数进行排序。

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int *arr,int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d ", arr[i]);
	}
	printf("\n");
}

void compare(const void* p1, const void* p2) {
	int* a = (int*)p1;
	int* b = (int*)p2;
	return *a - *b;
}

int main() {
	srand(time(NULL));
	int arr[10] = { 0 };


	for (int i = 0; i < 10 ; i++) {
		arr[i] = rand() % 100;
	}
	print(arr, 10);


	qsort(arr, 10, sizeof(int), compare);
	print(arr, 10);


	system("pause");
	return 0;
}