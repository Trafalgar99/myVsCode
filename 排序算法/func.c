#include"func.h"

//�����ӡ
void arr_print(int* arr) {
	int i; 
	for (i = 0; i < N; i ++ ) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}

//ѡ�������ڲ�һ�ֱȽ�ֻ����һ�Σ�
void arr_select(int*arr) {
	int i, j,max_pos;
	for (i = N; i > 1; i--) {
		max_pos = 0;	//��¼���ֵ���±�
		for (j = 1; j < i; j++) {
			if (arr[j] > arr[max_pos]) {
				max_pos = j;
			}
		}
		SWAP(arr[max_pos], arr[i-1]);
	}
}

//��������
void arr_insert(int* arr) {
	int j, i,k, insert_val; 
	for (i = 1; i < N; i++) {//Ҫ�����Ԫ��
		for (j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				insert_val = arr[i];
				for (k = i - 1; k >=j; k--) {
					arr[k + 1] = arr[k];
				}
				arr[j] = insert_val;
				break;
			}
		}
	}
}

//(�Ż�����������(��һ��Ԫ�ز���������
void arr_insert2(int* arr, int n)
{
	int i, j;
	//24 66 94  2 15 74 28 51 22 18  2
	for (i = 2; i <= n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			arr[0] = arr[i];//�ŵ��ݴ�λ��
			for (j = i - 1; arr[0] < arr[j]; --j)
				arr[j + 1] = arr[j];
			arr[j + 1] = arr[0];
		}
	}
}

//ϣ������(��һ��Ԫ�ز���������
void ShellSort(int* arr, int n)
{
	int dk, i, j;
	// 73 29 74 51 29 90 37 48 72 54 83
	for (dk = n / 2; dk >= 1; dk = dk / 2)//�����仯
	{
		for (i = dk + 1; i <= n; ++i)//��dkΪ�������в�������
		{
			if (arr[i] < arr[i - dk])
			{
				arr[0] = arr[i];
				for (j = i - dk; j > 0 && arr[0] < arr[j]; j = j - dk)
					arr[j + dk] = arr[j];
				arr[j + dk] = arr[0];
			}
		}
	}
}

//��������
int partition(int* arr, int left, int right) {
	int i,k;
	for (i = left, k = left; i < right; i++) {
		if (arr[i] < arr[right]) {
			SWAP(arr[i], arr[k]);
			k++;
		}
	}
	SWAP(arr[k], arr[right]);
	return k;
}
void arr_quick(int* arr, int left, int right) {
	int pivot;
	if (left < right) {
		pivot = partition(arr, left, right);
		arr_quick(arr, left, pivot - 1);
		arr_quick(arr, pivot + 1, right);
	}
}
	
//qsort����������ָ����������������Ԫ�صĵ�ֵַ��
int compare(const void* p1, const void* p2) {
	int* pleft = (int*)p1;
	int* pright = (int*)p2;
	return *pleft - *pright;
}

//������
void adjust_max_heap(int *a,int start,int len){	//����Ѹ�������
	int dad = start;
	int son = 2 * dad + 1;
	while (son < len) {
		if (son + 1 < len && a[son] < a[son + 1]) {
			son++;
		}
		if (a[dad] < a[son]) {
			SWAP(a[dad], a[son]);
			dad = son;
			son = 2 * dad + 1;
		}
		else {
			break;
		}
	}
}
void arr_heap(int arr[]) {
	int i;
	for (i = N / 2; i >= 0; i--) {			//�Ƚ���ʼ�������Ϊ�����
		adjust_max_heap(arr, i, N);
	}
	SWAP(arr[0], arr[N - 1]);
	for (i = N - 1; i > 0; i--) {			//ѭ�����ø�������
		adjust_max_heap(arr, 0, i);
		SWAP(arr[0], arr[i-1]); 
	}
}

