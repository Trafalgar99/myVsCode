#include <stdio.h>
#include<stdlib.h>



int main() {
	int head, current, mid;
	int row;
	for (row = 1; row <= 3; row++) {
		for (head = 4 - row; head > 0; head--) {
			printf(" ");
		}
		for (current = 1; current <= row + 1; current++) {
			printf("* ");
		}
		for (mid = 1; mid <= 9 - 2 * row; mid++) {

			printf(" ");
		}
		for (current = 1; current <= row + 1; current++) {
			printf("* ");

		}
		printf("\n");

	}
	for (row = 0; row < 10; row++) {
		for (head = 1; head <= row; head++)
			printf(" ");
		for (current = 1; current <= 10 - row; current++)
			printf("* ");
		printf("\n");
	}





	system("pause");
	return 0;
}
