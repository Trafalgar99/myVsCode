//��Ŀ���ж�һ�������Ƿ�Ϊ��������������

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf_s("%d", &n);
	if (0 == n || 1 == n) {
		
			printf("��������\n");
		
		
	}
	else if (2 == n) {
		printf("������\n");
	}
	else{
		for (int i = 2; i < n; i++) {
			if (0 == n % i) {
				printf("��������\n");
				break;
			}
			else if (i == n - 1) {
				printf("������\n");
				break;
			}
		}

	}
	

	/*int n;
	scanf("%d", &n);
	int flag = 1;

	if (n <= 0)
	{
		flag = 0;
	}

	for (int i = 2; i < sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("������");
	}
	else
	{
		printf("��������");
	}*/

	return 0;
	system("pause");
	return 0;
}