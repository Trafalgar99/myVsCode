//��Ŀ��809*??=800*??+9*?? ����??�������λ��, 809*??Ϊ��λ����8*??�Ľ��Ϊ��λ����9*??�Ľ�
//��Ϊ3λ������??�������λ������809*??��Ľ����

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