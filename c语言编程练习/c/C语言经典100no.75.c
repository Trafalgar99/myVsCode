//��Ŀ������һ�������������䷴ת���������ת������ȻΨһ��������

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num;
	int result=0;
	scanf("%d", &num);
	for (;num>0;num/=10) {
		int digit;
		digit = num % 10;
		result = result * 10 + digit;
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}