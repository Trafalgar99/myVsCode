//��Ŀ�����������������Ƕ�ף�ѧϰ�ɼ� >= 90�ֵ�ͬѧ��A��ʾ��60 - 89��֮�����B��ʾ��
//60�����µ���C��ʾ��

#include<stdio.h>
#include<stdlib.h>

int main() {
	int sco;
	char rank;
	while (scanf_s("%d", &sco) != EOF) {
		rank = (sco >= 90) ? 'A' : ((sco >= 60) ? 'B' : 'C');
		printf("%c\n", rank);
	}

	system("pause");
	return 0;
}