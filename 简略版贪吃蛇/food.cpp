#include"food.h"
#include<Windows.h>

void gotoxy2(HANDLE hOut2, int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hOut2, pos);
}
HANDLE hOut2 = GetStdHandle(STD_OUTPUT_HANDLE);

Food::Food(Wall& tempwall):wall(tempwall)
{

}

void Food::setFood()
{

	while (true)
	{
		foodx = rand() % (Wall::ROW - 2) + 1;
		foody = rand() % (Wall::COL - 2) + 1;

		//如果随机的位置是蛇头或者蛇身，就重新生成随机数
		if (wall.getWall(foodx, foody) == ' ')
		{
			wall.setWall(foodx, foody, '#');
			gotoxy2(hOut2, foody * 2, foodx);
			cout << "#";
			break;
		}
	}
	
	
}
