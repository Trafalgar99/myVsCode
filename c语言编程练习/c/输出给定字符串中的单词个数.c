#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//2.	����һ���ַ��������ʺ����ɿո񣩣� ������е��ʸ�����
//Input��____hello_________world_ how___are___you___\n
//Output : 5


int main() {
	int n = 0;
	int i;
	char c[20];
	while (gets(c)) {
		n = 0;
		for (i = 0; i < strlen(c); i++) {
			if (i != 0 && c[i] == ' ' && c[i - 1] != ' ') {
				n++;
			}
		}
		if (i != 0 && c[i - 1] != ' ') {   //Ӧ���������һλ����ֹ�ַ���
			n++;
		}
		printf("���ʵĸ�����%d\n", n);
	}

	system("pause");
	return 0;
}
