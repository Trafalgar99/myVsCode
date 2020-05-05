//题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int n,m;
	int i,j;
	srand(time(NULL));
	scanf_s("%d%d", &n,&m);
	int* parr = (int*)calloc(n, sizeof(int));
	int* parr2 = (int*)calloc(m, sizeof(int));
	for (i = 0; i < n; i++) {
		parr[i] = rand()%100;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", parr[i]);
	}
	printf("\n");
	for (i = m, j = 0; i > 0; i--,j++) {
		parr2[j] = parr[n - i];
	}
	for (i = n-m-1; i >=0; i--) {	
		parr[i + m] = parr[i];
	}
	for (i = 0; i < m; i++) {
		parr[i] = parr2[i];
	}
	for (i = 0; i < n; i++) {
		printf("%d ", parr[i]);
	}
	system("pause");
	return 0;
}