#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//2.	输入一行字符串（单词和若干空格）， 输出该行单词个数。
//Input：____hello_________world_ how___are___you___\n
//Output : 5


int main() {
	int n = 0;
	int i;
	char c[20];
	while (gets(c)) {
		n = 0;
		for (i = 0; i < strlen(c); i++) {
			if (i != 0 && c[i] == ' ' && c[i - 1] != ' ') {
				n++;
			}
		}
		if (i != 0 && c[i - 1] != ' ') {   //应对数组最后一位的终止字符；
			n++;
		}
		printf("单词的个数是%d\n", n);
	}

	system("pause");
	return 0;
}
