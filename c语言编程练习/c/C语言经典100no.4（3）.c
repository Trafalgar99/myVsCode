//输出一个日期是星期几
#include <stdio.h>
#include<stdlib.h>

int num(int year, int mon, int day) {
	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i, total = 0;
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
void swap(int* a, int* b) {
	int tem;
	tem = *a;
	*a = *b;
	*b = tem;
}

int gapnum(int year, int mon, int day) {
	int year1=2019, mon1=9, day1=15;
	int date1, date2;
	int spe = 0, gap, result;
	
	date1 = num(year1, mon1, day1);
	
	date2 = num(year, mon, day);
	if (year1 > year) {
		swap(&year1, &year);
	}
	for (int i = year1; i < year; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			spe++;
		}
	}
	gap = (year - year1 - spe) * 365 + spe * 366;
	result = abs(gap - date2 + date1);
	return result;
}

int main() {
	int year1 = 2019, mon1 = 9, day1 = 15;
	int year;
	int mon;
	int day;
	int t;
	scanf_s("%d%d%d", &year, &mon, &day);

	if (year > year1||year==year1&&(mon>mon1)|| (year == year1 && mon == mon1&&day>day1)) {
		t = gapnum(year, mon, day) % 7;
		switch (t) {
		case 0:printf("星期日"); break;
		case 1:printf("星期%d",t); break;
		case 2:printf("星期%d", t); break;
		case 3:printf("星期%d", t); break;
		case 4:printf("星期%d", t); break;
		case 5:printf("星期%d", t); break;
		case 6:printf("星期%d", t); break;
		}
	}
	else {
		t = gapnum(year, mon, day) % 7;
		switch (7-t) {
		case 0:printf("星期日"); break;
		case 1:printf("星期%d", 7-t); break;
		case 2:printf("星期%d", 7-t); break;
		case 3:printf("星期%d",7-t); break;
		case 4:printf("星期%d", 7-t); break;
		case 5:printf("星期%d",7-t); break;
		case 6:printf("星期%d", 7-t); break;
		case 7:printf("星期日"); break;
		}
	}
	

	system("pause");
	return 0;
}