//һ������������һ��İ���ˣ�İ��������̸��һ����Ǯ�ļƻ����üƻ����£���ÿ�����10��
//�����һ�����һԪǮ���ڶ������Ը���ʮ������Ҷ�ԪǮ�����������Ը���ʮ���������Ԫ
//(0<=n<=30)�졣�����̷ǳ�����,��Ȼ�����������Լ�����дһ�����򣬼�����n���У�İ���˸���
//���̶���Ǯ�����̸���İ���˶���Ǯ��
#include<iostream>
#include<cmath>

using namespace std;

long long int f(int n) {
	long long int ret=1;
	if (0 == n) {
		return 1;
	}
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

int main() {
	 int n;
	 cin >> n;

	  double  ret=0;
	 for (int i = 1; i <= n; i++) {
		 ret += f(i);
	 }
	 
	 cout << ret << endl;
	 
	
	return 0;
}
