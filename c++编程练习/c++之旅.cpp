//��д������ a + aa + aaa + aaaa +��+ aaa��a��n��a��֮�ͣ�����a��n�ɼ������롣
#include<iostream>
#include<cmath>
//#define SWAP(a,b) {int tem;tem=a;a=b;b=tem}
using namespace std;

int tool(int a, int n) {
	int result = 0;
	for (int i = 0; i < n; i++) {
		result = result * 10 + a;
	}
	return result;
}
void sum(int a, int n) {
	int sum=0;
	for (int i = 0; i <= n; i++) {
		sum += tool(a,i);
	}
	cout << sum << endl;
}

int main() {
	int a, n;
	cin >> a >> n;
	//int to=tool(a, n);
	sum(a, n);
	return 0;
}