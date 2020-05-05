#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define SWAP(a,b){int temp;temp=a;a=b;b=temp;}
//≤Â»Î≈≈–Ú
void insert(int* arr, int n) {
	int i;
	int key;
	for (i = 0; i <n; i++) {
		if (arr[i] > arr[n-1]) {
			key = arr[n - 1];
			for (int k = n - 2; k >= i; k--) {
				arr[k + 1] = arr[k];
			}
			arr[i] = key;
		}

	}
		
}
void insertionSort(int* arr, int n) {
	for (; n > 1; n--) {
		insert(arr, n);
	}

}

int main() {
	srand(time(NULL));
	int i;
	int arr[N];
	for (i = 0; i < N; i++) {
		arr[i] = rand() % 100;
	}
	insertionSort(arr, N);

	system("pause");
	return 0;
}