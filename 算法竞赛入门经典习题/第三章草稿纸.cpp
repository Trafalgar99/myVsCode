#include<iostream>
#include<cmath>
#include<cstdio>
#include<time.h>
#include<ctype.h>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;




void test01()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			int n = a * 1100 + b * 11;
			/*int m = floor(sqrt(n) + 0.5);
			if (m * m == n) printf("%d\n", n);*/
			if (sqrt(n) == floor(sqrt(n) + 0.5)) printf("%d\n", n);
			//floor（x）函数返回不超过x的最大整数
			//用来判断一个数是不是整数
		}
	}
}

void test02()
{
	int n;
	int cnt = 0;
	scanf_s("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}
		cnt++;
	}
	printf("%d", cnt);
	
}

void test03()
{
	//阶乘之和后六位
	const int MOD = 1000000;
	int n, s = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial = (factorial * j % MOD);
		}
		s = (s + factorial) % MOD;
	}
	printf("%d\n", s);
	printf("Time used=%.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return;

}

void test04()
{
	//水仙花数
    	for (int i = 100; i <= 999; i++)
	{
		int head = i / 100;
		int body = i / 10 % 10;
		int tail = i % 10;
		if ((int)pow(head, 3) + (int)pow(body, 3) + (int)pow(tail, 3) == i)
		{
			printf("%d\n", i);
		}
	}
}

void test05()
{
	//韩信点兵
	int a, b, c;
	bool flag = false;
	scanf_s("%d%d%d", &a, &b, &c);
	for (int i = 10; i <= 100; i++)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
		{
			printf("%d\n", i);
			flag = true;
			break;
		}
	}
	if (!flag)
	{
		printf("No Answer");
	}
}

void test06()
{
	//打印三角形

	int n;
	scanf_s("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		for (int k = 0; k < abs(i - n); ++k)
		{
			printf(" ");
		}
		for (int j =2*i-1; j>=1 ; j--)
		{
			
			printf("#");
			/*if (j <= i)
			{

			}
			else
			{
				printf("#");
			}*/
			
		}
		printf("\n");
	}
}

void test07()
{
	//子序列的和
	int n, m;
	double sum = 0;
	while (scanf_s("%d%d", &n, &m) == 2 && m && n)
	{
		sum = 0;
		for (long long int i = n; i <= m; ++i)
		{
			sum += 1.0 / (i * i);
		}
		printf("%.5f\n", sum);
	}
	
}

void test08()
{
	//分数化小数
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%.*f\n",c, a * 1.0 / b);
}
bool judge(int n)
{
	int head = n / 100;
	int body = n / 10 % 10;
	int tail = n % 10;
	if (body != head && body != tail && head != tail)
	{
		return true;
	}
	return false;
}
void test09()
{
	//排列
	//不错的题
	for (int i = 123; i <= 333; i++)//由于最后的结果的三个数一定在1000以内，所以要求最小的要小于333
									//大于123
	{
		if (judge(i) && judge(2 * i) && judge(3 * i))
		{
			printf("%d %d %d\n", i, 2 * i, 3 * i);
		}
	}
}

void test10()
{
	//开灯问题
	int n, k;
	int first = 1;
	scanf_s("%d%d", &n, &k);
	int a[1010];
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j % i == 0)
			{
				a[j] = !a[j];
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i])
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
}

void test11()
{
	//蛇形填数
	int n, x, y, tot = 0;
	int a[20][20];
	scanf_s("%d", &n);
	memset(a, 0, sizeof(a));
	tot = a[x = 0][y = n - 1] = 1;
	while (tot < n * n)
	{
		while (x + 1 <  n && !a[x + 1][y]) a[++x][y] = ++tot;
		while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;
		while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;
		while (y + 1 <  n && !a[x][y + 1]) a[x][++y] = ++tot;
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%3d",a[x][y]);
		}
		printf("\n");
	}	
	return;
}

void test12()
{
	//竖式问题
	int count = 0;
	char s[20], buf[99];
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++)
	{
		for (int de = 11; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				if (strchr(s, buf[i]) == NULL)
				{
					ok = 0;
				}
			}
			if (ok)
			{
				printf("<%d>\n", ++count);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
			}
		}
		
	}
	printf("The number of solution = %d\n", count);
	return;
}

void test13()
{
	//TeX中的引导
	int c, q = 1;
	while ((c = getchar()) != EOF)
	{
		if (c == '"')
		{
			printf("%s", q ? "``" : "''");
			q = !q;
		}
		else
		{
			printf("%c", c);
		}
	}
	return ;
}

void test14()
{
	//WERTYU
	char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int i, c;
	while ((c = getchar()) != EOF)
	{
		for (i = 1; s[i] && s[i] != c; i++);
		if (s[i])
		{
			putchar(s[i - 1]);
		}
		else
		{
			putchar(c);
		}
	}
	return ;
}
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";//ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789
char r(char ch)
{
	if (isalpha(ch))
	{
		return rev[ch - '0' + 25];
	}
}
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string",
	"a mirrored pailndrome" };
void test15()
{
	//回文词
	char s[30];
	while (scanf("%s", s) == 1)
	{
		int len = strlen(s);
		int p = 1, m = 1;
		for (int i = 0; i < (len + 1) / 2; i++)
		{
			if (s[i] != s[len - 1 - i])	p = 0;//不是回文串
			if (r(s[i]) != s[len - 1 - i]) m = 0;//不是镜像串
		}
		printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
	}
	
	return ;
}

void test16()
{
	//猜数字游戏的提示
	int n, a[1010], b[1010];
	int kase = 0;
	while (scanf("%d", &n) == 1 && n)	//n=0时输入结束
	{
		printf("Game %d:\n", ++kase);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (;;)
		{
			int A = 0, B = 0;
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &b[i]);
				if (a[i] == b[i])
				{
					A++;
				}
			}
			if (b[0] == 0) break;	//正常的猜测序列不会有0，所以只判断第一个数是否为0即可
			for (int d = 1; d <= 9; d++)
			{
				int c1 = 0, c2 = 0;	//统计数字d在答案序列不会有0，所以只判断
				for (int i = 0; i < n; i++)
				{
					if (a[i] == d) c1++;
					if (b[i] == d) c2++;
				}
				if (c1 < c2) B += c1;
				else B += c2;
			}
				printf("    (%d,%d)\n", A, B - A);
			}
		}
		return ;
	}

void test17()
{
	//生成元
	int T, n;
	int ans[100005];
	memset(ans,0,sizeof(ans));
	for (int m = 1; m < 100005; m++)
	{
		int x = m, y = m;
		while (x > 0)
		{
			y += x % 10;
			x /= 10;
		}
		if (ans[y] == 0 || m < ans[y]) ans[y] = m;
	}
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
	return;
}
int less1(const char* s, int p, int q)
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[(p + i) % n] != s[(q + i) % n])
		{
			return s[(p + i) % n] < s[(q + i) % n];
		}
		return 0;
	}
}
void test18()
{
	//环状序列
	int T;
	char s[105];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", s);
		int ans = 0;
		int n = strlen(s);
		for (int i = 0; i < n; i++)
		{
			if (less1(s, i, ans))
			{
				ans = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			putchar(s[(i+ans)%n]);
		}
		putchar('\n');
	}
	return;



}

void test19()
{
	int ans[26] = { 0 };
	int n;	cin >> n;
	for (int i = 11; i < 20; i++)ans[i] = 4;
	ans[20] = 15;	ans[21] = 4;
	cout << ans[n];
	return ;
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	//test15();
	//test16();
	//test17();
	//test18();
	test19();



	return 0;
}