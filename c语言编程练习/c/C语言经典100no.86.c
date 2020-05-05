//题目：两个字符串连接。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char s1[50], s2[50];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%s", strcat(s1, s2));


	system("pause");
	return 0;
}