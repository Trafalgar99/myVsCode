#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20

typedef struct {
	int num;
	char name[20];
	float score;
}stu;

int main(int argc, char* argv[]) {
	FILE* fp;
	stu s;
	char c;
	int ret;
	char buf[128] = { 0 };
	int i = 8;

	if (argc != 2) {
		printf("error argc\n");
		goto error;
	}

	fopen_s(&fp, argv[1], "r+");
	if (NULL == fp) {
		perror("fopen_s");
		goto error;
	}
	/*printf("strlen(buf)=%d\n", strlen(buf));
	ret=fwrite(buf, sizeof(char), strlen(buf), fp);
	memset(buf, 0, sizeof(buf));
	ret=fseek(fp, 7, SEEK_SET);
	ret=fread(buf, sizeof(char), sizeof(buf), fp);
	printf("%d\n%s\n", ret, buf);*/

	/*while (fgets(buf, sizeof(buf), fp) != NULL) {		//���ĵ��еĵ��ʵ�����ĸ�ĳɴ�д
		buf[0] = buf[0] - 32;
		if (buf[strlen(buf) - 1] == '\n') {
			fseek(fp, -1 * strlen(buf) - 1, SEEK_CUR);
		}
		else {
			fseek(fp, -1 * strlen(buf), SEEK_CUR);
		}
		fputs(buf, fp);
		fseek(fp,0,SEEK_CUR);
	}*/


	//while (fgets(buf, sizeof(buf), fp) != NULL) {		//fgets��ʹ��
	//	printf("%s", buf);
	//	//puts(buf);
	//}
	//fgets(buf, sizeof(buf), stdin);
	//printf("%s", buf);

	/*fputs("world",fp);		//fputs��ʹ��
	printf("%s", buf);*/


	//strcpy_s(buf,20, "world");
	//ret= fwrite(buf,sizeof(char),strlen(buf),fp);//fwriteʵ��д����
	//printf("%d %s\n", ret, buf);


	//ret=fread(buf, sizeof(char), N,fp);		//freadʵ�ֶ�����
	//printf("%d %s\n", ret, buf);


	//c = 'H';							//fputcʵ��д����
	//ret=fputc(c, fp);


	/*while ((c = fgetc(fp)) != EOF) {		//fgetcʵ�ֶ�����
		printf("%c", c);
	}
	printf("\n");*/

	while (EOF != fscanf(fp, "%d%s%f", &s.num, s.name, &s.score)) {//fscanf_s��β���������ȡ�����Ĳ����Ĵ�С
		printf("%d %s %f\n", s.num, s.name, s.score);
	}
	//fseek(fp, 0, SEEK_CUR);
	//fprintf(fp,"%d %s %f", s.num, s.name, s.score);//��ʽ�����



	fclose(fp);
error:

	system("pause");
	return 0;
}