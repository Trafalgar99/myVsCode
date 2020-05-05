#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int x;	
		int n = 0;
		int distance=0;

		cin >> x;	//读入数据

		if (x < 0)	
		{
			x = -x;
		}
		
		
		while (true)
		{
			distance = distance+n;	//第一次跳1，之后每一次加1，与x的距离满足这个
			
			if (distance == x)		//这是完美情况，恰好能跳到x
			{
				break;
			}
				
			if (distance > x)	//不完美情况
			{
				int gap = distance - x;	//超过x的距离

				if (gap % 2 == 0)	//若超过的距离是偶数gap，意味着需要少跳gap，在第（gap）/2时向
				{					//反方向跳一次，此时少跳了（gap）/2，第（gap）/2+1次跳跃了（gap）/2+1
									//相较于第gap/2次跳跃时只多跳了1，即通过一次反复消耗了gap这么多的距离，即达到目的
									//但是对于n来说在gap/2时多跳了一次，但是却缺少了超出x的最后一次故直接输出即可
					break;		//若果是奇数只能找到下一个偶数
				}
					
			}
			n++;
		}

		cout << n << endl;

	return 0;
}
