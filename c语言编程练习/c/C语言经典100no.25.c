//题目：求1+2!+3!+...+20!的和。

#include<stdio.h>
#include<stdlib.h> 
#define N 4

int tool(int i) {
	int result = 1;
	for (int j = 1; j <= i; j++) {
		result = result * j;
	}
	return result;
}
int main() {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum = sum + tool(i);
	}
	printf("%d", sum);

	
	system("pause");
	return 0;
}
