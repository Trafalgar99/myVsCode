//��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ�
//�ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x, z�ȣ�
//�������ҳ��������ֵ�������

#include<stdio.h>
#include<stdlib.h>

int main() {
	char a, b, c;
	for (int a = 'x'; a <= 'z'; ++a)
	{
		for (int b = 'x'; b <= 'z'; ++b)
		{
			for (int c = 'x'; c <= 'z'; ++c)
			{
				if (a != 'x' && c != 'x' && c != 'z' && a != b && a != c && b != c)
				{
					printf("a��%c�ȣ�b��%c�ȣ�c��%c��\n", a, b, c);
				}
			}
		}
	}


	return 0;
}