//题目：找到年龄最大的人，并输出。

#include<stdio.h>
#include<stdlib.h>

typedef struct person {
	char name[20];
	int age;
}per;

int main() {
	per fr[3] = { {"a",12},{"b",24},{"c",15} };
	per* p=fr;
	int max = fr[0].age;
	char* pp = fr[0].name;
	for (int i=0;i<3;i++) {
		if (p[i].age> max) {
			pp = p[i].name;
			max = p[i].age;
		}
		
	}
	printf("%s", pp);

	system("pause");
	return 0;
}