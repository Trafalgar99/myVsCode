//��Ŀ��ѧϰstatic���徲̬�������÷���

#include<stdio.h>

void f()
{
	int i = 0;
	static int si = 0;
	printf("i=%d\n", i);
		printf("static si = %d\n", si);		//static����ľֲ������ں�������ʱ������ʧ
	si++;									//����ͨ�����ں�������ʱ����ʧ
	i++;
}

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		f();
	}

	return 0;
}