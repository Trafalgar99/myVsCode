//��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	float a, b;
	float sum = 0;
	int tem;
	int cnt = 1;
	for (b = 1,a=2; cnt <= 20;b=tem) {
		sum += a / b;
		tem = a;
		a = a + b;
		cnt++;
		
	}
	printf("%f", sum);
	
	
	printf("%f\n", sum);
	system("pause");
	return 0;
}