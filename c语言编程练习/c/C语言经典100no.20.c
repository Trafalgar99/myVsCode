//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include<stdio.h>
#include<stdlib.h>


int main() {
	float height = 100;
	float sum = height;
	for (int i = 0; i < 9; ++i)
	{
		height /= 2;
		sum += 2 * height;
	}
	height /= 2;
	printf("共经过%f米\n", sum);
	printf("第10次反弹%f米\n", height);
	system("pause");
	return 0;
}
