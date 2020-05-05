//题目：809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结
//果为3位数。求??代表的两位数，及809*??后的结果。

#include<stdio.h>
#include<stdlib.h>

int digitnum(int n) {
	int cnt = 0;
	for (; n > 0; n /= 10) {
		cnt++;
	}
	return cnt;
}

int main() {

	int i;
	for (i = 10; i <= 99; i++) {
		if (809 * i == 800 * i + 9 * i && 4 == digitnum(809 * i) && 2 == digitnum(8 * i) && 3 == digitnum(9 * i)) {
			printf("%d %d\n", i, 809 * i);
		}
	}
	system("pause");
	return 0;
}