//一个正整数，如果它能被7整除，或者它的某一位上的数字为7，则称其为与7相关的数。现求所有小于
//等于n的与7无关的正整数的平方和。
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