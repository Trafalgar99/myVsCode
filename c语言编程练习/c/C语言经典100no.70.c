//题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
void mystrlen(char arr[]) {
	int cnt = 0;
	int i=0;
	while (arr[i]!=0) {
		cnt++;
	}
	printf("%d", cnt);
}

int main() {
	char arr[N] = {0};
	gets(arr);
	printf("%d", strlen(arr));


}