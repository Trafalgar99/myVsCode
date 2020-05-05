//题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的*。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[7];
	
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}