//	��Ŀ����n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ�
//��������µ���ԭ���ڼ��ŵ���λ��

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int i;
	scanf_s("%d", &n);
	int cnt = n;//����ʣ��ѡ��
	int num=0;//����������
	int* parr =(int*) calloc(n,sizeof(int));
	
	for (i = 0; i < n; i++) {
		parr[i] = i + 1;
	}
	for (i = 0; cnt >1; i++) {

		if (i == n ) {				//���ƻ��α���
			i = 0;
		}

		if (0 != parr[i]) {			//��¼ÿ������������
			num++;
		}
		if (3 == num) {				//��̭���б�3��ren
			parr[i] = 0;
			num = 0;
			cnt--;
		}
		

	}
	for (i = 0; i < n; i++) {			//������Ӯ��
		if (parr[i] != 0) {
			printf("%d\n", parr[i]);
		}
	}

	free(parr);
	system("pause");
	return 0;
}