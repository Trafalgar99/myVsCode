//��Ŀ��������������x, y, z��������������С���������

#include <stdio.h>
#include<stdlib.h>

#define  SWAP(a, b){int tmp;tmp=a;a=b;b=tmp;}//�������ʹ�ú�����ָ��ȷ���

int main() {
	int x, y, z;
	while (scanf_s("%d%d%d", &x, &y, &z) != EOF) {
		if (x > y) {
			SWAP(x, y);
		}
		if (y > z) {
			SWAP(y, z);
		}
		if (x > y) {
			SWAP(x, y);
		}
		printf("%d %d %d\n", x, y, z);
	}
	system("pause");
	return 0;
}
