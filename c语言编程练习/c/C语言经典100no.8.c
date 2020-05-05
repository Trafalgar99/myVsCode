//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//（输出前40个月即可） （斐波那契数列）
#include<stdio.h>
#include<stdlib.h>


 //递归函数
int calc(int*arr,int a, int b, int i) {
	int c;
	if (i < 40) {
		c = a + b;

		arr[i] = c;
		i++;
		calc(arr, b, c, i);
	}
	else {
		return 0;
	}	
}   

int main()
{
	int arr[40] = {1,1,2};
	int i;
	calc(arr, arr[0], arr[1], 2);
	for (i = 0; i < 40; i++) {
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}