//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void fun3(char a, char* str, char* after);

	int main(int argc, char* argv[]) {
		char a; 
		int n;
		scanf_s("%d", &n);
		//char* str = NULL; 
		//char* after = NULL;  
		char* str = (char*)calloc(n,sizeof(char) );  
		char* after = (char*)calloc(n,sizeof(char));   
		//0.input 
		printf("Please input the str:\n"); 
		getchar();			//用于中和上一个scanf末尾的回车
		gets(str); 
		printf("a = ");  
		scanf_s("%c", &a);

		//1.func 
		fun3(a, str, after); 

		printf("The result is \n%s\n", after);
		free(str); 
		free(after); 
		system("pause"); 
		return 0;
	}

	void fun3(char a, char* str, char* after) { 
		int j = 0;  
		int length = strlen(str);
		for (int i = 0; i < length; i++) {
			if (str[i] != a) {
				after[j++] = str[i]; 
			}
		} 
		after[j] = '\0';
	}
