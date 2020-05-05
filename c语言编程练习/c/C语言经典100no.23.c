//题目：打印出如下图案（菱形）。
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i, j;
	for (i = 0; i < 7;i++) {
		for (j = 0; j < abs(3 - i); j++) {
			printf(" ");
		}
		for (j = 0; j < 7 - 2 * abs(3 - i); j++) {
			
				printf("*");

		}
		printf("\n");
	}

	return 0;
}