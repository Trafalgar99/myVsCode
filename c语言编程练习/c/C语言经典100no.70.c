//��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�
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