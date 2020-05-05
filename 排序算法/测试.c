#include<stdio.h>

void quickSort(int arr[],int low,int high)
{
	if (low > high) return;
	int left = low, right = high;
	int pivot = arr[left]; 

	while (left < right)
	{
		while (left < right && arr[right] >= pivot)
		{
			right--;
		}
		arr[left] = arr[right];
		while (left<right&&arr[left]<=pivot)
		{
			left++;
		}
		arr[right] = arr[left];
	}

	arr[left] = pivot;

	quickSort(arr, low, left - 1);
	quickSort(arr, left + 1, high);

}

void print(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{

	/*int arr[5] = { 2,5,2,4,8 };
	print(arr, 5);
	quickSort(arr, 0, 4);
	print(arr, 5);*/

	int arr[4] = { 1,4,3,2 };
	quickSort(arr, 0, 3);
	int sum = 0;
	for (int i = 3; i >= 0; i -= 2)
	{
		sum += arr[i];
	}
	printf("%d",sum);

	return 0;
}