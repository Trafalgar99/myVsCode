//��Ŀ���ж�101��200֮��������� �ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)��
//����ܱ������� ���������������������֮��������
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int i,j;
	for (i = 101; i < 201; i++) {
		for (j = 2; j < sqrt(i); j++) {
			if (0 == i % j) {
				break;
			}
			else if (j > (sqrt(i) - 1)) {
				printf("%d ", i);
			}
		}
	}
	system("pause");
	return 0;
}