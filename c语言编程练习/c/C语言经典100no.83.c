//��Ŀ����0��7������ɵ�����������

#include<stdio.h>
#include<stdlib.h>

int main() {
	int sum = 0, cnt = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (i == 0)
		{
			cnt = 4;
		}
		else if (i == 1)
		{
			cnt *= 7;
		}
		else
		{
			cnt *= 8;
		}
		sum += cnt;
		printf("%dλ��Ϊ�����ĸ���Ϊ%d\n", i + 1, cnt);
	}

	printf("����Ϊ%d\n", sum);
	system("pause");
	return 0;
}