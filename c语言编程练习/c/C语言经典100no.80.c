//题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只
//猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它
//同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少
//有多少个桃子？

#include<stdio.h>
#include<stdlib.h>



int main() {
	int i,j,flag;

	for (i = 0;; i++) {
		flag = 0;
		int tem = i;
		for(j = 0; j < 5; j++) {
			
			if ((tem - 1) % 5 == 0) {
				tem = (tem - 1) * 4 / 5;
			}
			else {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	printf("%d",i);
	system("pause");
	return 0;
}