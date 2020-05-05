//题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如
//下： 每位数字都加上5, 然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和
//第三位交换。

#include<stdio.h>
#include<stdlib.h>

void encrypt(int arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = (arr[i]+5)%10;
	}
	int tem;
	tem = arr[3];
	arr[3] = arr[0];
	arr[0] = tem;
}

int main() {
	int i;
	int arr[4];
	for (i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	encrypt(arr);
	for (i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}