//��Ŀ��ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

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
		getchar();			//�����к���һ��scanfĩβ�Ļس�
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
