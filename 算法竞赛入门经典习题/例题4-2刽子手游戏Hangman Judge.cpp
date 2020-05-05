#include<iostream>
#include<cstring>

using namespace std;

#define maxn 100;
int mleft, chance;
char s[100], s2[100];
int win, lose;

void guess(char c)
{
	int bad = 1;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			mleft--;
			s[i] = ' ';
			bad = 0;
		}
	}
	if (bad) chance--;
	if (!chance) lose = 1;
	if (!left) win = 1;
}

int main()
{
	int rnd;
	while (scanf("%d%s%s", &rnd, s, s2) == 3 && rnd != -1)
	{
		printf("Round %d\n", rnd);
		win = lose = 0;
		mleft = strlen(s);
		chance = 7;
		for (int i = 0; i < strlen(s2); i++)
		{
			guess(s2[i]);
			if (win || lose) break;
		}
	}

	if (win) printf("You win.\n");
	else if (lose) printf("You lose.\n");
	else printf("You chickened out.\n");



	return 0;
}

//这种程度的算法我应该是能想出来的 加油