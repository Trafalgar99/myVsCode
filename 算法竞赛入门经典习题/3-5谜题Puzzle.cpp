#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

struct Point
{
	int x, y;
	Point() {};
	Point(int x, int y) :x(x), y(y) {};
};
typedef Point Vector;
const int Gsize = 5;
vector<string>grid;
Point epos;
map<char, Vector>DIRS;
bool valid(const Point& p)
{
	return p.x >= 0 && p.x < Gsize && p.y >= 0 && p.y < Gsize;
}
void printGrid()
{
	for (int i = 0; i < Gsize; i++)
	{
		for (int j = 0; j < Gsize; j++)
		{
			if (j) cout << " ";
			cout << grid[i][j];
		}
		cout << endl;
	}
}
bool tryMove(char cmd)
{
	if (!DIRS.count(cmd)) return false;
	Point p;
	p.x = epos.x + DIRS[cmd].x;
	p.y = epos.y + DIRS[cmd].y;
	if (!valid(p)) return false;
	swap(grid[p.x][p.y], grid[epos.x][epos.y]);
	epos = p;

	return true;
}

int main()
{
	int t = 1;
	string line;
	DIRS['A'] = Vector(-1, 0); DIRS['B'] = Vector(1, 0); DIRS['L'] = Vector(0, -1); DIRS['R'] = Vector(0, 1);
	while (true)
	{
		grid.clear(); 
		epos.x = -1; epos.y = -1;
		for (int i = 0; i < Gsize; i++)
		{
			getline(cin,line);
			if (line == "Z") return 0;
			for (int j = 0; j < Gsize; j++)
			{
				if (line[j] == ' ')
				{
					epos.x = i;
					epos.y = j;
				}
			}
			grid.push_back(line);
		}
		char move;
		string moves;
		while (true)
		{
			getline(cin, line);
			
			bool end = line[line.length()-1]=='0' ;
			if (!end) moves.append(line);
			else moves.append(line, 0, line.size() - 1);
			if (end) break;
		}
		bool legal = true;
		for (int i = 0; i < moves.size()-1; i++)
		{
			if (!tryMove(moves[i]))
			{
				legal = false;
				break;
			}
		}
		if (t > 1) cout << endl;
		cout << "Puzzle #" << t++ << ":" << endl;
		if (legal) printGrid();
		else cout << "This Puzzle has no final configuration." << endl;
	}
	return 0;
}
/*
TRGSJ
XDOKI
M VLN
WPABE
UQHCF
ARRBBL0
ABCDE
FGHIJ
KLMNO
PQRS 
TUVWX
AAA
LLLL0
ABCDE
FGHIJ
KLMNO
PQRS 
TUVWX
AAAAABBRRRLL0
Z
*/

struct POint
{
	int x;
	int y;
	POint() {};
	POint(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	/*POint& operator=(POint &p)
	{
		this->x = p.x;
		this->y = p.y;
	}*/
};
typedef POint VEctor;

void practice()
{
	map<char, VEctor>m;
	m['A'] = VEctor(-1,0);
	char grid[5][5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", grid[i]);
	}
	char buf[1024];
	scanf("%s", buf);
	POint s;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (grid[i][j] == ' ')
			{
				s.x = i;
				s.y = j;
			}
		}
	}
	




	return;
}