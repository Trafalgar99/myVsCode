#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	
	int i, j, k;
	int cnt = 0;

	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							cnt++;
							printf ("%d",i*100+j*10+k);
							if (cnt == 6) {
								printf("\n");
								cnt = 0;
							}
							else {
								printf(" ");
							}
							
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;

	}
	system("pause");
	return 0;
}