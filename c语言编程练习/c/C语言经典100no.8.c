//�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
//�����ǰ40���¼��ɣ� ��쳲��������У�
#include<stdio.h>
#include<stdlib.h>


 //�ݹ麯��
int calc(int*arr,int a, int b, int i) {
	int c;
	if (i < 40) {
		c = a + b;

		arr[i] = c;
		i++;
		calc(arr, b, c, i);
	}
	else {
		return 0;
	}	
}   

int main()
{
	int arr[40] = {1,1,2};
	int i;
	calc(arr, arr[0], arr[1], 2);
	for (i = 0; i < 40; i++) {
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}