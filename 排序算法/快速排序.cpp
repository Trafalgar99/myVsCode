  #include<iostream>
#include<algorithm>

using namespace std;

//�������������ݹ飩
void quickSort(int arr[],int low,int high)
{
	if (low > high) return;  //�ݹ�����ı�־
	int first = low, last = high;
	int key = arr[first];  //���ֱ�ĵ�һ����¼��Ϊ���ᣨ����С�ķֶκʹ�ķֶΣ�
	while (first < last)
	{
		while (first < last && arr[last] >= key)
		{
			--last;
		}
		arr[first] = arr[last];  //����keyС���Ƶ��Ͷ� 
		while (first < last && arr[first] <= key)
		{
			++first;
		}
		arr[last] = arr[first];  //����key����Ƶ��߶� 
	}
	arr[first] = key;  //����ȷ�������ֵ�������first=last����һ����ȣ�ǰ������ᱻ������ 
	quickSort(arr, low, first - 1);  //����ߵ����ݶ����� 
	quickSort(arr, first + 1, high);  //���ұߵ����ݶ����� 

	return;
}

void quickSort2(int arr[], int low, int high)
{
	if (low > high) return;

	int left = low, right = high;
	int pivot = arr[left];

	while (left < right)
	{
		while (left < right && arr[right] >= pivot)
			right--;
		arr[left] = arr[right];

		while (left < right && arr[left] <= pivot)
			left++;
		arr[right] = arr[left];

	}

	arr[left] = pivot;
	quickSort2(arr, low, left - 1);
	quickSort2(arr, left + 1, high);


	return;
}



 
void selectionSort(int arr[],int low,int high)
{
	
	while (high >= 0)
	{
		int maxVal = arr[low];
		int maxPos = low;
		for (int i = 0; i <= high; i++)
		{
			if (maxVal < arr[i])
			{
				maxPos = i;
				maxVal = arr[i];
			}
		}
		int tmp = arr[high];
		arr[high] = maxVal;
		arr[maxPos] = tmp;
		high--;
	}
	

}


void test01()
{
	int arr[5] = {5,4,3,2,1 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	quickSort2 (arr, 0, 4);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}



void newQuickSort(int arr[], int low, int high)
{
	if (low > high) return;
	int pivot = arr[low];
	int left = low - 1, right = high + 1;

	while (left < high)
	{
		do left++; while (arr[left] < pivot);
		do right--; while (arr[right] > pivot);
		if (left < right) swap(arr[left], arr[right]);
	}

	newQuickSort(arr, low, right);
	newQuickSort(arr, right + 1, high);
}
int tmp[999];
void merge_sort(int q[], int l, int r)
{
	
	if (l >= r) return;

	int mid = l + r >> 1;

	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);

	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else tmp[k++] = q[j++];
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= r) tmp[k++] = q[j++];

	for (i = 1, j = 0; i <= r; i++, j++)
		q[i] = tmp[j];

}

// ����ģ��
// ���䱻����Ϊ
bool check(int a) {}

int bsearch_1(int l, int r)
{
	while (l < r)
	{
		int mid = l + r >> 1;
		if (check(mid)) r = mid;
		else l = mid + 1;

	}
	return l;
}

//
int bsearch_2(int l, int  r)
{
	while (l < r)
	{
		int mid = l + r + 1 >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}

	return l;
}

int main()
{
	test01();


	return 0;
}