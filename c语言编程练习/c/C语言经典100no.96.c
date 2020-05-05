//题目：计算字符串中子串出现的次数。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char arr[] = { "abcdabcdeffff" };
	char arr2[20];
	int cnt = 0;
	int flag = 0;
	scanf("%s", arr2);
	for (int j = 0; j <= strlen(arr) - strlen(arr2); j++) {
		flag = 0;
		for (int i = j,k=0; i < j+strlen(arr2)&&k<strlen(arr2); i++,k++) {
			if (arr[i] != arr2[k]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cnt++;
		}
	}
	
	printf("%d\n", cnt);

	system("pause");
	return 0;
}