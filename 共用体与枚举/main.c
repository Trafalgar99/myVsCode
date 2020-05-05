#include<stdio.h>
#include<stdlib.h>

union data {
	int a;
	char c;
	float f;
};
int main() {
	union data d;
	d.a = 4;
	d.c = 'a';
	d.f = 98.5;

	system("pause");
	return 0;
}
