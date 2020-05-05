//题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3
//个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，
//他说是10岁。请问第五个人多大？

#include<stdio.h>
#include<stdlib.h>
#define N 10

int calc(int n) {
	int old=10;

	if (n==1) {
		return old;
	}
	else {
		old =2+calc(n-1);
	
	}


}
int main() {
	printf("%d\n", calc(3));
	system("pause");
	return 0;
}