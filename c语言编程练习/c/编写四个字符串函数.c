#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char a[]) {
	int i = 0;
	while (a[i]) {
		i++;
	}
	return i;
}
void mystrcpy(char b[], char a[]) {
	int i = 0;
	while (a[i]) {
		b[i] = a[i];
		i++;
	}
	b[i] = 0;
}
int mystrcmp(char a[], char b[]) {
	int i = 0;
	int isPrime = 0;
	while (!isPrime) {
		(a[i] > b[i]) ? (isPrime = 1) : ((a[i] == b[i]) ? (isPrime = 0) : (isPrime = -1));
		i++;
		if (a[i] == 0 || b[i] == 0) {
			break;
		}
	}
	return isPrime;
}
void mystrcat(char a[], char b[]) {
	int i = mystrlen(a);
	int j = 0;
	while (b[j - 1]) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {
	char a[15] = "wkdwkd";

	char b[10] = "wkdwkd";

	printf("length is %d\n", mystrlen(a));

	printf("length is %d\n", (int)strlen(a));

	mystrcpy(b, a);

	puts(b);

	printf("%d\n", mystrcmp(a, b));

	mystrcat(a, b);

	puts(a);

	system("pause");
	return 0;
}
