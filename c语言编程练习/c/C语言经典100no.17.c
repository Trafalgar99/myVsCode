//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
#include<stdio.h>
#include<stdlib.h>

#define N 12
int main() {
	char arr[N] = "h09 o_k.kf4";
	int word=0, spac=0, num=0, oth=0;
	int i;
	for (i = 0; i < N; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') {
			word++;
		}
		else if (' ' == arr[i]) {
			spac++;
		}
		else if (arr[i] >= '0' && arr[i] <= '9') {
			num++;
		}
		else {
			oth++;
		}
	}
	printf("word:%d\nspac:%d\nnum:%d\noth:%d\n", word, spac, num, oth);

	system("pause");
	return 0;
}