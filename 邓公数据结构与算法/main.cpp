#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void reverse(int* A, int low, int high)
{
	//颠倒一个数组
	if (low < high)
	{
		swap(A[low], A[high]);
		reverse(low - 1, high + 1);
	}
}

void max2_1(int A[], int low, int high, int &x1, int &x2)
{
	//找出序列中最大和次大的数
	if (A[x1 = low] < A[x2 = low + 1])
		swap(x1, x2);
	for (int i = low + 2; i < high; i++)
	{
		if (A[x2] < A[i])
			if (A[x1] < A[x2 = i])
				swap(x1, x2);
	}
}

void max2_2(int A[], int low, int high, int& x1, int& x2)
{
	//找出序列中最大和次大的数，递归加分治
	if (low + 2 == high)
	{
		if (A[x1 = low] < A[x2 = low + 1])
			swap(x1, x2);
		return;
	}
	if (low + 3 == high)
	{
		if (A[x1 = low] < A[x2 = low + 1])
			swap(x1, x2);
		for (int i = low + 2; i < high; i++)
		{
			if (A[x2] < A[i])
				if (A[x1] < A[x2 = i])
					swap(x1, x2);
		}
		return;
	}

	int mid = (low + high) / 2;
	int x1L, x2L; max2_2(A, low, mid, x1L, x2L);
	int x1R, x2R; max2_2(A, mid, high, x1R, x2R);

	if (A[x1L] > A[x1R])
	{
		x1 = x1L;
		x2 = (A[x2L] > A[x1R]) ? x2L : x1R;
	}
	else
	{
		x1 = x1R;
		x2 = (A[x2R] > A[x1L]) ? x2R : x1L;
	}
}


int main()
{
	vector<int> v;
	

	return 0;
}