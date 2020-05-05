//	题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，
//问最后留下的是原来第几号的那位。

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int i;
	scanf_s("%d", &n);
	int cnt = n;//厂商剩余选手
	int num=0;//报数计数器
	int* parr =(int*) calloc(n,sizeof(int));
	
	for (i = 0; i < n; i++) {
		parr[i] = i + 1;
	}
	for (i = 0; cnt >1; i++) {

		if (i == n ) {				//控制环形报数
			i = 0;
		}

		if (0 != parr[i]) {			//记录每个人所报的数
			num++;
		}
		if (3 == num) {				//淘汰所有报3的ren
			parr[i] = 0;
			num = 0;
			cnt--;
		}
		

	}
	for (i = 0; i < n; i++) {			//输出最后赢家
		if (parr[i] != 0) {
			printf("%d\n", parr[i]);
		}
	}

	free(parr);
	system("pause");
	return 0;
}