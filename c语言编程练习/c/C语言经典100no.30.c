//��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	 int n;
	while (EOF != scanf_s("%d", &n)) {
		 int sum = 0;
		for ( int i = n; i > 0; i /= 10)
		{
			sum = sum * 10 + i % 10;
		}
		if (sum == n)
		{
			printf("�ǻ�����");
		}
		else
		{
			printf("���ǻ�����");
		}
		sum = 0;

	}
	
	system("pause");
	return 0;

}