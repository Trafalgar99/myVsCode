//输入一个日期和整数n，输出从该日期起经过n天后的日期

#include <stdio.h>
#include<stdlib.h>

typedef struct date {
	int year;
	int mon;
	int day;
}d,*pd;

d tom(int *year, int *mon, int *day) {
	d m = { 0,0,0 };
	pd p=&m;
	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (*year % 4 == 0 && *year % 100 != 0 || *year % 400 == 0) {
		if (*mon < 12) {
			if (*day < b[*mon-1]) {
				(*day)++;
			}
			else {
				*day = 1;
				(*mon)++;
			}
		}
		else {
			if (*day < b[*mon-1]) {
				(*day)++;
			}
			else {
				*day = 1;
				*mon = 1;
				(*year)++;
			}
		}
	}
	else {
		if (*mon < 12) {
			if (*day < a[*mon-1]) {
				(*day)++;
			}
			else {
				*day = 1;
				(*mon)++;
			}
		}
		else {
			if (*day < a[*mon-1]) {
				(*day)++;
			}
			else {
				*day = 1;
				*mon = 1;
				(*year)++;
			}
		}
	}

	p->year = *year;
	p->mon = *mon;
	p->day = *day;
	return m;
}



int main() {
	int n;
	int year;
	int mon;
	int day;
	scanf_s("%d%d%d%d", &year, &mon, &day,&n);
	d ar = { year,mon,day };
	pd po = &ar;
	for (int i = 0; i < n; i++) {
		 ar = tom(&po->year, &po->mon, &po->day);
	}
		
		

	printf("%d-%d-%d", po->year, po->mon, po->day);

	system("pause");
		return 0;
}