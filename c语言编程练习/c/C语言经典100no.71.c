//��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼

#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	char name[20];
	char sex[3];
	int age;
}stu;
void input(stu* group)
{
	printf("������ѧ���������Ա����䣺\n");
	for (int i = 0; i < 2; ++i)
	{
		scanf("%s%s%d", &group[i].name, &group[i].sex, &group[i].age);
	}
}
void output(stu* group)
{
	printf("��ӡѧ���������Ա����䣺\n");
	for (int i = 0; i < 2; ++i)
	{
		printf("%s %s %d\n", group[i].name, group[i].sex, group[i].age);
	}
}

int main() {
	stu s1[5];
	input(s1);
	output(s1);
	system("pause");
	return 0;
}