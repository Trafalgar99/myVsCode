//��Ŀ����һ���������ֽ������������磺����90����ӡ��90 = 2*3*3*5��
//��������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ�
//(1)n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k���̣���Ϊ�µ�������n���ظ�ִ�С�
//(2)���n���ܱ�k����������k + 1��Ϊk��ֵ���ظ�ִ�е�һ����

#include<stdio.h>
#include<stdlib.h>
int tool1(int b) {
	int i;
	
	if (b == 2) {
		return 1;
	}
	else {
		for (i = 2; i <= b; i++) {
			if (0 == b % i) {
				break;
			}
			else if (i >= b - 1) {
				return 1;
				break;
			}
		}
		return 0;
	}
	
}
int tool2(int a) {
	int i,s;
	for (i = 2; i < a; i++) {
		if (0 == a % i && tool1(i)) {
			s = i;
			break;
		}
	}
	return s;
}
int main() {
	int k;
	int num;
	scanf_s("%d", &num);
	k = tool2(num);
	while (k<=num) {
		if (num % k==0) {
			printf("%d ", k);
			num = num / k;
		}
		else {
			k = k + 1;
		}
	}
	system("pause");
	return 0;
}