//题目：利用条件运算符的嵌套：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，
//60分以下的用C表示。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int sco;
	char rank;
	while (scanf_s("%d", &sco) != EOF) {
		rank = (sco >= 90) ? 'A' : ((sco >= 60) ? 'B' : 'C');
		printf("%c\n", rank);
	}

	system("pause");
	return 0;
}