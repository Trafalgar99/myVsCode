//��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�

#include<stdio.h>
#include<stdlib.h>

int add(int a,int n) {
	int s = 0;
	int ro = a;
	printf("s=");
	for (int i = 0; i < n; i++) {
		s = s + a;
		a = a * 10 + ro;
		printf("%d", a);
		if (i < n - 1) {
			printf("+");
		}
	}
	printf("=%d",  s);
}

int main() {
	int n;
	int a = 2;
	int s,result;
	while (scanf_s("%d%d", &a,&n) != EOF) {
		add(a, n);
	}
	system("pause");
	
	return 0;
}