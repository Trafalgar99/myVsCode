#include<stdio.h>
#include<stdlib.h>

int main() {

	int n=9;
	//scanf("%d", &n);
	int i, j;
	i = 1;
	while (i<= n) {
		j = 1;
		while (j <= i) {
			printf("%d*%d=%d", j, i, i * j);
			if (i * j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}





	system("pause");
	return 0;
}