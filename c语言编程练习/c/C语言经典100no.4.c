//题目：输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int year, mon, day;
	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[]= { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i,total;
	while (scanf_s("%d%d%d", &year, &mon, &day) != EOF) {
		total = 0;
		if (year% 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			for (i = 0; i < mon - 1; i++) {
				total += b[i];
			}
			total += day;
			printf("%04d-%02d-%02d is %d th	\n", year, mon, day, total);

		}
		else {
			for (i = 0; i < mon - 1; i++) {
				total += a[i];
			}
			total += day;
			printf("%04d-%02d-%02d is %d th	\n", year, mon, day, total);

		}
		
	}


	system("pause");
	return 0;
}