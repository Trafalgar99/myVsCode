//≈≈–ÚÀ„∑®
#include<iostream>
#include<ctime>
using namespace std;

class Arr {
public:
	Arr(int Max_size) {
		this->Max_size = Max_size;
		this->arr = new (int[this->Max_size - 1]);
		for (int i = 0; i < Max_size; i++) {
			this->arr[i] = rand() % 100;
		}
	}
	~Arr() {
		if (this->arr) {
			delete[](this->arr);
			this->arr = NULL;
		}
	}
	int* arr;
	int Max_size;
};

int main() {


	system("pause");
}