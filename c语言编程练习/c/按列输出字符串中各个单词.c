#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//3.	����һ���ַ��������ʺ����ɿո񣩣�������е��ʣ�ÿ������һ�У�
//Input��____hello_________world_ how___are___you___\n
//Output : hello
//	world
//	how
//	are
//	you


int main() {

	int n, i;
	char c[20];
	while (gets(c) != NULL)
	{
		n = 0;
		for (i = 0; i < strlen(c); i++)
		{
			if (i != 0 && c[i - 1] != ' ' && c[i] == ' ' && c[i - 1] != '\n')
			{
				c[i] = '\n';
			}
		}
		for (i = 0; i < strlen(c); i++)
		{
			if (c[i] != ' ')
			{
				printf("%c", c[i]);
			}
		}
		if (i == 0 || c[i - 1] != ' ') printf("\n");	//�����һ���ַ����ǿո�ʱʹ����Ƶ���һ��
	}
	system("pause");
	return 0;
}
