//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d ",arr[i]);
	}
	printf("\n");
}
void compare(const void* p1, const void* p2) {
	int* a = (int*)p1;
	int* b = (int*)p2;
	return *a - *b;
}

int main() {
	int arr[11] = { 0 };
	srand(time(NULL));


	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}
	qsort(arr, 10, sizeof(int), compare);
	print(arr, 10);


	scanf_s("%d", &arr[10]);


	for (int i = 0; i < 10; i++) {
		int j;
		if (arr[i] > arr[10]) {
			int tem = arr[10];
			for ( j = 9; j >=i; j--) {
				
				arr[j + 1] = arr[j];
			}
			arr[i] =tem;
			break;
		}
	}
	print(arr, 11);


	system("pause");
	return 0;
}