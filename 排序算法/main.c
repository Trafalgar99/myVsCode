#include"func.h"

int main() {
	int* arr = (int*)calloc(N, sizeof(int));
	int i;
	time_t begin, end;
	srand(time(NULL));	
	for (i = 0; i < N; i++) {
		arr[i]= rand()%100;
	}
	//arr_print(arr);
	begin = time(NULL);
	/*arr_select(arr);
	arr_print(arr);
	arr_insert(arr);
	arr_print(arr); 
	arr_quick(arr, 0, N - 1);
	arr_print(arr);
	qsort(arr, N, sizeof(int), compare);
	ShellSort(arr,N-1);
	arr_print(arr);
	arr_insert2(arr, N-1);
	arr_print(arr);
	end = time(NULL);*/
	//printf("use time is %d\n", end - begin);
	arr_heap(arr);
	end = time(NULL);
	printf("use time is %d\n", end - begin);
	//arr_print(arr);	
	system("pause");
	return 0;
}