#include<stdio.h>
#include<math.h>


int main()
{
	char num[110];
	scanf("%s", num);
	if (num[0] == '0')
		{
		   printf("ling");
			return 0;
		}
	int result = 0;
	for (int i = 0; num[i] != '\0'; i++)
	{
		result += num[i]-'0';
	}
	char arr[10][6] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	//printf("%s", arr[5]);
	int cnt = 0;
	int tem=result;
	while (tem)
	{
		cnt++;
		tem /= 10;
	}
	while (result)
	{
		int x = result / (int)pow(10,(cnt-1));
		printf("%s", arr[x]);
		result =result%(int) pow(10, (cnt - 1));
		cnt--;
		if (result % 10 == 0)
		{

		}
		else {
			printf(" ");
		}
	}


	return 0;
}