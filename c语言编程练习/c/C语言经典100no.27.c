//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include<stdio.h>
#include<stdlib.h> 
#define N 10

char  revprint(char* arr,int n) {
	if (n == 0) {
	 printf("%c", arr[0]);
	 return;
	}
	else {
		printf("%c", arr[n - 2]);
		revprint(arr, n - 1);
		
	}
}

int main() {
	char arr[N];
	gets(arr);
	revprint(arr,N);
	system("pause");
	return 0;
}