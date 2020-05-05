#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//3.	输入一行字符串（单词和若干空格），输出该行单词（每个单词一行）
//Input：____hello_________world_ how___are___you___\n
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
		if (i == 0 || c[i - 1] != ' ') printf("\n");	//当最后一个字符不是空格时使光标移到下一行
	}
	system("pause");
	return 0;
}
