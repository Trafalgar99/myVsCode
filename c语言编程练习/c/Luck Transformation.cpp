//����һ������ͱ���������ÿ�α����ҵ�һ����С���±�ʹ����һ��Ϊ4����һ��Ϊ7
//�����ж��±����ż��������������ȫд���ģ�ż��ȫд��7

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, k;
	
	int x;
	
	cin >> n >> k;
	string arr;
	cin >> arr;
	
	while (true)
	{

		for (x = 0; k > 0; x++)
		{
			if (arr[x] == '4' && arr[x + 1] == '7')
			{
			
				if (arr[x] == '4' && arr[x + 1] == '7')
				{
					if ((x + 1) & 1)
					{
						arr[x + 1] = '4';
					}
					else if (!((x + 1) & 1))
					{
						if (arr[x - 1] == '4')
						{
							if (k & 1)
							{
								arr[x] = '7';
							}
							else
							{
								arr[x] = '4';
							}
							break;
						}
						else
						{
							arr[x] = '7';
						}
					}
					
					k--;
				}
			}

		}


		cout << arr;
		break;
	}
	
	

	return 0;
}