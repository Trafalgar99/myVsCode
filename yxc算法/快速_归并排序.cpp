#include<iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
const int N = 1e6 + 10;

int n;
int arr[N], tmp[N];


void quickSort(int arr[], int low, int high) 
{
	if (low >= high) return;
	
	int pivot = arr[low], left = low - 1, right = high + 1;
	while (left < right)
	{
		do left++; while (arr[left] < pivot);
		do right--; while (arr[right] > pivot);
		if (left < right) swap(arr[left], arr[right]);
	}

	quickSort(arr, low, right);
	quickSort(arr, right+1, high);

}


void mergeSort(int arr[], int low, int high)
{
	if (low >= high) return;

	int mid = high + low >> 2;

	mergeSort(arr, low, mid), mergeSort(arr, mid + 1, high);

	int k = 0, i = low, j = mid + 1;
	while (i <= mid && j <= high)
		if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	while (i <= mid) tmp[k++] = arr[i++];
	while (j <= high) tmp[k++] = arr[j++];

	for (i = 1, j = 0; i <= high; i++, j++) arr[i] = tmp[j];
}

int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	quickSort(arr, 0, n-1);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}