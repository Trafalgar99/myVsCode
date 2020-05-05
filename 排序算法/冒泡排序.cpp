#include<iostream>
#include<algorithm>

using namespace std;



void bubbleSort(int arr[], int n)
{
	for(bool sorted = false; sorted = !sorted; n--)
		for(int i = 1; i < n; i++)
			if (arr[i - 1] > arr[i])
			{
				swap(arr[i - 1], arr[i]);
				sorted = false;
			}
} 

void arr_print(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	int arr[5] = { 1, 0, 3, 4, 2 };
	arr_print(arr, 5);
	bubbleSort(arr, 5);
	arr_print(arr, 5);



	return 0;
}