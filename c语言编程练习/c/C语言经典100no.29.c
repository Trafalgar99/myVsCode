//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int cnt = 0;
	while (scanf_s("%d", &n) != EOF) {
		while (n) {
			int pot = n % 10;
			n /= 10;
			printf("%d",pot);
			cnt++;

		}
		printf("\n����%dλ\n", cnt);
		cnt = 0;

	}


	system("pause");
	return 0;
}