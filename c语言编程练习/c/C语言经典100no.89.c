//��Ŀ��ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ�����
//�£� ÿλ���ֶ�����5, Ȼ���úͳ���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ��
//����λ������

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