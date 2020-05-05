#include<iostream>
#include<ctime>

using namespace std;
int Max_size=10;

class Liner_list{
public:

	//构造
	Liner_list() {
		this->arr = new(int[Max_size]);
		for (int i = 0; i < Max_size; i++) {
			arr[i] = rand() % 100;
		}
	}

	//拷贝构造
	Liner_list( int* arr) {
		this->arr = new int[Max_size];
		for (int i = 0; i < Max_size; i++) {  //深拷贝
			this->arr[i] = arr[i];
		}
	}

	//删除最小元素
	int delete_min_val() {

		if (Max_size == 0) {
			return -1;
		}
		int min_pos = 0;
		int min_val = arr[0];
		for (int i = 1; i < Max_size; i++) {
			if (arr[i] < min_val) {
				min_val = arr[i];
				min_pos = i;
			}
		}
		int key = arr[min_pos];
		arr[min_pos] = arr[Max_size - 1];
		Max_size--;
		return key;
		

	}
	
	//删除一个指定元素
	int delete_a_x_val(int x) {
		for (int i = 0; i < Max_size; i++) {
			if (this->arr[i] == x) {
				for (int j = i; j < Max_size - 1; j++) {
					this->arr[j] = this->arr[j + 1];
				}
				Max_size--;
			}
		}
	}

	//删除所有指定元素
	void delete_all_x_val(int x) {
		int k = 0;
		int i;
		for (i = 0; i < Max_size; i++) {
			if (this->arr[i] != x) {
				this->arr[k] = this->arr[i];
				k++;
			}
		}
		Max_size = k;
	}

	//删除给定开区间的值
	void delete_some_vals(int s,int t) {
		int k = 0;
		int i;
		for (i = 0; i < Max_size; i++) {
			if (s >= t || this->arr == NULL) {
				return;
			}
			if (this->arr[i]>=t||this->arr[i]<=s) {
				this->arr[k] = this->arr[i];
				k++;
			}
		}
		Max_size = k;
	}

	//删除重复出现的元素
	void delete_repeating_vals() {
		int x;
		for (int j = 0; j < Max_size-1; j++) {
			x = this->arr[j];
			int k = j+1;
			int kk = 0;
			int i;
			for (i = j+1; i < Max_size; i++) {
				if (this->arr[i] != x) {
					this->arr[k] = this->arr[i];
					kk++;
					k++;
				}
			}
			Max_size = kk+j+1;
		}
		
	}
		

	//将所有元素逆序
	void reverse_list() {
		for (int i = 0; i < Max_size/2; i++) {
			swap(this->arr[i], this->arr[Max_size-1 - i]);
		}
	}

	//将一个数组中的两个顺序表逆序
	void reverse_two_list(int arr[],int m,int n) {
		this->arr = arr;
		for (int i = 0; i < (m+n)/2; i++) {
			swap(this->arr[i], this->arr[m+n-1-i]);
		}
		for (int i = 0; i < n/2; i++) {
			swap(this->arr[i], this->arr[m-1-i]);
		}
		for (int i = m; i < (n+m)/2; i++) {
			swap(this->arr[i], this->arr[n-1-i]);
		}
	
	}

	//打印数组元素
	void print_list() {
		for (int i = 0; i < Max_size; i++) {
			cout << this->arr[i]<<" ";
		}
		cout << endl;
	}

	//合并两个顺序表为一个新顺序表
	int* merge_two_list(int arr1[],int arr2[]) {
		this->arr = new int[2 * Max_size];
		int i=0, j=0, k=0;
		while (i < Max_size && j < Max_size) {
			if (arr1[i] > arr2[j]) {
				this->arr[k] = arr2[j];
				j++;
				k++;
			}
			else {
				this->arr[k] = arr1[i];
				i++;
				k++;
			}
		}
		if (i < j) {
			for (; i < Max_size; i++) {
				this->arr[k] = arr1[i];
			}
		}
		else {
			for (; j < Max_size+1; j++) {
				this->arr[k] = arr1[j];
			}
		}
		return arr;
	}


	//析构
	~Liner_list() {				//注意深拷贝浅拷贝问题（只在拷贝构造进行地址操作时）
		if (this->arr) {

			//delete[](this->arr);
			//this->arr = NULL;
		}
		
	}


	int *arr;
};

//逆序函数
void Reverse_List(int* arr, int m,int n) {
	for (int i = 0; i < (n-m) / 2; i++) {
		swap(arr[i+m], arr[n-1-i]);
	}
}

void swap(int &a,int&b) {
	int tem;
	tem = a;
	a = b;
	b = tem;
}

void test01() {
	//测试删除最小元素函数
	Liner_list l1;
	l1.print_list();
	l1.delete_min_val();
	l1.print_list()
		;
}

void test02() {
	//测试逆序数组函数
	Liner_list l2;
	l2.print_list();
	l2.reverse_list();
	l2.print_list();
}

void test03() {
	Liner_list l3;
	l3.print_list();
	int x;
	cin >> x;
	l3.delete_all_x_val(x);
	l3.print_list();
}

void test04() {
	Liner_list l4;
	l4.print_list();
	int s,t;
	cin >> s>>t;
	l4.delete_some_vals(s, t);
	l4.print_list();
}

void test05() {
	int arr[10] = { 1,2,1,3,4,5,4,3,8,9 };
	Liner_list l6(arr);
	l6.print_list();
	l6.delete_repeating_vals();
	l6.print_list();
}

void test06() {
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0,1,2,3,4,5,6,7,8,9 };
	Liner_list l7;
	int* arr = l7.merge_two_list(arr1, arr2);
	for (int i = 0; i < 2 * Max_size; i++) {
		cout << arr[i] << " ";
	}
	

}

void test07() {
	int arr[] = { 1,2,3,4,5,6,2,3,4,5,6 };
	Liner_list l8;
	l8.reverse_two_list(arr, 6, 5);
	for (int i = 0; i <11; i++) {
		cout << arr[i] << " ";
	}
}

void test08() {
	//用逆序操作实现数组移位
	int arr[] = { 1,2,3,4,5,6,7,1,2,3 };

	Reverse_List(arr, 0,10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Reverse_List(arr,0, 3);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Reverse_List(arr, 3, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	
	//test01();

	//test02();

	//test03();

	//test04();

	//test05();

	//test06();
	
	//test07();

	test08();


	system("pause");
	return EXIT_SUCCESS;
}