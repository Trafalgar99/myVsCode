//��Ŀ��һ��������������100����һ����ȫƽ������
//�ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i,j;
	int x;
	for (x = 0;; x++) {
		if (!(sqrt(x + 100) - (int)sqrt(x + 100)) && !(sqrt(x + 268) - (int)sqrt(x + 268)) ){
			break;
		}
	}
	printf("%d", x);
	system("pause");
	return 0;
}
