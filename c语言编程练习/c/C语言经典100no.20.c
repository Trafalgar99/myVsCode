//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

#include<stdio.h>
#include<stdlib.h>


int main() {
	float height = 100;
	float sum = height;
	for (int i = 0; i < 9; ++i)
	{
		height /= 2;
		sum += 2 * height;
	}
	height /= 2;
	printf("������%f��\n", sum);
	printf("��10�η���%f��\n", height);
	system("pause");
	return 0;
}
