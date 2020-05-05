//题目： 企业发放的奖金根据利润提成。 利润(I)低于或等于10万元时，
//奖金可提10% ； 利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，
//高于10万元的部分，可提成7.5 % ； 20万到40万之间时，高于20万元的部分，可提成5% ；
//40万到60万之间时高于40万元的部分，可提成3 % ； 60万到100万之间时，高于60万元的部分，
//可提成1.5 % ； 高于100万元时，超过100万元的部分按1 % 提成。 从键盘输入当月利润I，
//求应发放奖金总数？
#include <stdio.h>
#include<stdlib.h>

int main() {
	int prf;
	while (scanf_s("%d", &prf) != EOF) {
		switch (prf/10) {
		case 0:printf("%f", 0.1 * prf); break;
		case 1:printf("%f", 1 + 0.075 * (prf - 10)); break;
		case 2:
		case 3:printf("%f", 1.75 + 0.05 * (prf - 20)); break;
		case 4:
		case 5:printf("%f", 2.75 + 0.03 * (prf - 40)); break;
		case 6:
		case 7:
		case 8:
		case 9:printf("%f", 2.81 + 0.015 * (prf - 60)); break;
		case 10:printf("%f", 3.41 + 0.01 * (prf - 100)); break;
		}
	}
	

	system("pause");
	return 0;
}
