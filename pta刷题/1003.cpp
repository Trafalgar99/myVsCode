#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;
		int Ppos,Pnum=0, Tpos,Tnum=0;
		bool isTrue = true;
		for (int i = 0; i < (int)str.size(); i++)
		{

			if (str[i] != 'A' && str[i] != 'T' && str[i] != 'P')
			{
				
				isTrue = false;
				break;
			}
			else
			{
				if (str[i] == 'P')
				{
					Ppos = i;
					Pnum++;
				}
				if (str[i] == 'T')
				{
					Tpos = i;
					Tnum++;
				}
			}
		}
		if (isTrue == false || Pnum!=1 || Tnum != 1||Tpos<Ppos||
			Ppos*(Tpos-Ppos-1)!=str.size()-1-Tpos||str=="PT")
		{
			cout << "NO" << endl;
			
		}
		else
		{
			cout << "YES" << endl;
		}
		//cout << Ppos << " " << Tpos;
	}

	return 0;
}