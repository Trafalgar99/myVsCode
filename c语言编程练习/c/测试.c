#include<stdio.h>


void my_print(int arr[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("%d", arr[2]);
	printf("\n%d", 2[arr]);
	my_print(arr);
	return 0;
}