//一个百万富翁碰到一个陌生人，陌生人找他谈了一个换钱的计划。该计划如下：我每天给你10万，
//而你第一天给我一元钱，第二天我仍给你十万，你给我二元钱，第三天我仍给你十万，你给我四元
//(0<=n<=30)天。百万富翁非常高兴,欣然接受了这个契约。请编写一个程序，计算这n天中，陌生人给了
//富翁多少钱，富翁给了陌生人多少钱。
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
