#include <stdio.h>
#include<stdlib.h>

//1.�������ַ����ֵ��ַ����ֿ�, ʹ�÷ֿ�����ַ���ǰһ���������ֺ�һ��������ĸ����
//�硰h1ell2o3��->��123hello��

int main() {
	char arr[9] = "h1ell2o3";
	char sep[2][6];
	int i, j1 = 0, j2 = 0;
	int cnt = 0;
	for (i = 0; i < 8; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			sep[1][j1] = arr[i];
			j1++;
		}
		else {
			sep[0][j2] = arr[i];
			j2++;
			cnt++;
		}

	}
	for (i = 0; i < 6; i++) {
		if (i == cnt) {
			break;
		}
		printf("%c", sep[0][i]);
	}
	for (i = 0; i < 6; i++) {
		printf("%c", sep[1][i]);
	}
	system("pause");
	return 0;
}