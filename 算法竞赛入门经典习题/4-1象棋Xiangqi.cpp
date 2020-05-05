#include<iostream>
#include<cstring>

using namespace std;

char board[15][15] = { 0 };//∆Â≈Ã

struct Chess
{
	int x;
	int y;

};


int main()
{
	int n, bGx, bGy;
	while (scanf("%d%d%d", &n, &bGx, &bGy) == 3 && n)
	{
		board[bGx][bGy] = 'B';
		for (int i = 0; i < n; i++)
		{
			char c;
			int cx, cy;
			scanf("%c%d%d", &c, &cx, &cy);
			board[cx][cy] = c;
			
		}


















	}




	return 0;
}