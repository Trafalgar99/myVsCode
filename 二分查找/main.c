#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int compare(const void*p1,const void*p2) {
	int* pleft = (int*)p1;
	int* pright = (int*)p2;
	return *pleft - *pright;
}

//二分查找
int binarySearch(int* arr, int low, int high, int target) {
	int mid;
	while (low <= high) {
		mid = low + high>>1;
		if (arr[mid] > target) {
			high = mid - 1; 
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}else{
			return mid;
		}
	}
	return -1;
}

int main() {
	int arr[N];
	int i;
	int ret;		//返回值
	srand(time(NULL));
	for (i = 0; i < N; i++) {
		arr[i] = rand() % 100;
	}
	qsort(arr, N, sizeof(int), compare);
	for (i = 0; i < N; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
	while (scanf_s("%d", &i) != EOF) {
		ret=binarySearch(arr, 0, N - 1, i);
		printf("pos=%d\n",ret);
	}
	
	system("pause");
	return 0;
}