//��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3
//���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ�
//��˵��10�ꡣ���ʵ�����˶��

#include<stdio.h>
#include<stdlib.h>
#define N 10

int calc(int n) {
	int old=10;

	if (n==1) {
		return old;
	}
	else {
		old =2+calc(n-1);
	
	}


}
int main() {
	printf("%d\n", calc(3));
	system("pause");
	return 0;
}