//��Ŀ����ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������*��

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