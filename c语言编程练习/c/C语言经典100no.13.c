//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ�������
//���磺153��һ��"ˮ�ɻ���"����Ϊ153 = 1�����η���5�����η���3�����η���

#include<stdio.h>
#include<stdlib.h>

int tri(int a) {
	int a1 = a % 10;
	int a2 = a / 100;
	int a3 = (a / 10) % 10;
	int ret;
	ret = a1 * a1* a1+a2*a2*a2+a3*a3*a3;

	return ret;
}

int main() {
	int i;
	for (i = 153; i < 1000; i++) {
		if (i ==tri(i) ) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}