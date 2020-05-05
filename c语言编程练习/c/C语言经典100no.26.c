//题目：利用递归方法求5!。

#include<stdio.h>
#include<stdlib.h> 
#define N 5

int tool(int i) {
	int result;
	if (1 == i) {
		return 1;
	}
	else {
		result = tool(i - 1) * i;
		i--;
		return result;
	}

}

int main() {

	int result = tool(N);
	printf("%d\n", result);
	system("pause");
	return 0;
}