//һ����������������ܱ�7��������������ĳһλ�ϵ�����Ϊ7�������Ϊ��7��ص�������������С��
//����n����7�޹ص���������ƽ���͡�
#include<iostream>
#include<cmath>
//#define SWAP(a,b) {int tem;tem=a;a=b;b=tem}
using namespace std;


int main() {
	int n;
	cin >> n;
	int i, j;
	int sum = 0;
	int cnt = 0;
	for (i = 1; i < n; i++) {
		for (j= i,cnt=0,sum=0; sum <=n; j++) {
				sum += j;
				cnt++;
				if (sum == n) {
					for (int k = i; k < i+cnt; k++) {
						cout << k << " ";
					}
					cout << endl;
					break;
				}

		}
	}
	
	return 0;
}