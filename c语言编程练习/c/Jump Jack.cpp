#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int x;	
		int n = 0;
		int distance=0;

		cin >> x;	//��������

		if (x < 0)	
		{
			x = -x;
		}
		
		
		while (true)
		{
			distance = distance+n;	//��һ����1��֮��ÿһ�μ�1����x�ľ����������
			
			if (distance == x)		//�������������ǡ��������x
			{
				break;
			}
				
			if (distance > x)	//���������
			{
				int gap = distance - x;	//����x�ľ���

				if (gap % 2 == 0)	//�������ľ�����ż��gap����ζ����Ҫ����gap���ڵڣ�gap��/2ʱ��
				{					//��������һ�Σ���ʱ�����ˣ�gap��/2���ڣ�gap��/2+1����Ծ�ˣ�gap��/2+1
									//����ڵ�gap/2����Ծʱֻ������1����ͨ��һ�η���������gap��ô��ľ��룬���ﵽĿ��
									//���Ƕ���n��˵��gap/2ʱ������һ�Σ�����ȴȱ���˳���x�����һ�ι�ֱ���������
					break;		//����������ֻ���ҵ���һ��ż��
				}
					
			}
			n++;
		}

		cout << n << endl;

	return 0;
}
