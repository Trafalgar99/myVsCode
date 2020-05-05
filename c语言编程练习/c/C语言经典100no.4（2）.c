//输出两个日期相差多少天

#include <stdio.h>
#include<stdlib.h>

int num(int year, int mon, int day) {
	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i, total=0;
	//while (scanf_s("%d%d%d", &year, &mon, &day) != EOF) {
		//total = 0;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			for (i = 0; i < mon - 1; i++) {
				total += b[i];
			}
			total += day;
			//printf("%04d-%02d-%02d is %d th	\n", year, mon, day, total);

		}
		else {
			for (i = 0; i < mon - 1; i++) {
				total += a[i];
			}
			total += day;
			//printf("%04d-%02d-%02d is %d th	\n", year, mon, day, total);
		}
	//}
	return total;
}

int main() {
	int year1, mon1, day1;
	int year2, mon2, day2;
	int date1, date2;
	int spe = 0,gap,result;
	scanf_s("%d%d%d", &year1, &mon1, &day1);
		date1=num(year1, mon1, day1);
		scanf_s("%d%d%d", &year2, &mon2, &day2);
		date2 = num(year2, mon2, day2);
		for (int i=year1; i < year2; i++) {
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
				spe++;
			}
		}
		gap = (year2 - year1 - spe) * 365 + spe * 366;
		result = gap -date1 + date2;
		printf("%d", result);
	system("pause");
	return 0;
}