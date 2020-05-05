//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
	int n;
	int j = 0;
	scanf_s("%d", &n);
	char* before = (char*)calloc(n, sizeof(char));
	char* after = (char*)calloc(n, sizeof(char));
	getchar();
	gets(before);
	for (int i = strlen(before)-1; i >= 0; i--) {
		
		after[j] = before[i];
		j++;
	}
	puts(after);
	system("pause");
	return 0;
}