#include<stdio.h>
#include<stdlib.h>

int main() {
	int number, n;
	int inp;
	int finished=0;
	int cnt = 0;
	printf("请输入目标数字和目标次数\n");
	scanf_s("%d %d", &number, &n);
	do {
		printf("请输入正确数字\n");
		scanf_s("%d", &inp);
		cnt++;
		if (inp < 0) {
			printf("Game Over\n");
			finished = 1;
		}
		else if (inp > number) {
			printf("Too Big\n");
		}
		else if (inp < number) {
			printf("Too small\n");
		}
		else {
			if (cnt == 1) {
				printf("Bingo\n");
			}
			else if (cnt <= 3) {
				printf("Lucky You\n");
			}
			else {
				printf("Good Guess\n");
			}
			finished = 1;
		}
		if (cnt==n) {
			if (!finished) {
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while (!finished);

	system("pause");
	return 0;
}