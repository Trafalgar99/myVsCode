//题目：一个数如果恰好等于它的真因子之和，这个数就称为"完数"。例如6=1＋2＋3。
//编程找出1000以内的所有完数。 Tips:找数n的因子只需要找到n/2(n/2-n的数是n的1-2倍，
//	所以当大于n/2时，不会有因数)

#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	int n;
	int sum=0;
	for (n = 1; n < 1000; n++) {
		sum = 0;				//当计算下一个数的真因子和时，sum应该清零
		for (i = 1; i < n; i++) {
			if (0 == n % i) {
				sum += i;
			}
		}
		if (n == sum) {
			printf("%3d ", n);
		}
	}
	

	system("pause");
	return 0;
}