#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include<conio.h>
#include<Windows.h>
using namespace std;
#include"wall.h"
#include"snake.h"
#include"food.h"

void gotoxy(HANDLE hOut, int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hOut, pos);
}
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));

	//是否死亡标识
	bool isDead = false;

	char preKey = NULL;


	Wall wall;
	wall.initWall();

	wall.drawWall();

	Food food(wall);
	food.setFood();

	Snake snake(wall,food);
	snake.initSnake();

	//snake.move('w');

	
	gotoxy(hOut, 0, Wall::ROW);
	cout << "得分： " << snake.getScore() << "分" << endl;

	//gotoxy(hOut,10, 5);		//y*2  x	 
	
	//接受用户的输入
	while (!isDead)
	{
		char key = _getch();

		//如果是第一次按了左键才不能激活游戏
		//判断上一次的移动方向
		if (preKey==NULL&&key == snake.LEFT)
		{
			continue;
		}

		do
		{
			if (key==snake.LEFT|| key == snake.DOWN|| key == snake.RIGHT|| key == snake.UP)
			{

				//判断本次按键是否与上次冲突
				if ((key == snake.LEFT && preKey == snake.RIGHT)||
					(key == snake.RIGHT && preKey == snake.LEFT)||
					(key == snake.DOWN && preKey == snake.UP)||
					(key == snake.UP&& preKey == snake.DOWN))
				{
					key = preKey;
				}
				else
				{
					preKey = key;		//不是冲突按键，可以更新按键
				}

				if (snake.move(key) == true)
				{
					//移动成功
					//system("cls");
					//wall.drawWall();
					gotoxy(hOut, 0, Wall::ROW);
					cout << "得分： " << snake.getScore() << "分" << endl;
					Sleep(snake.getSleepTime());
				}
				else
				{
					isDead = true;
					break;
				}

			}
			else
			{
				key = preKey;		//强制将错误按键变为上一次按键
			}

			
		} while (!_kbhit());		//当没有键盘输入时返回0

		if (snake.move(key) == true)
		{
			//移动成功
			//system("cls");
			//wall.drawWall();
			
			
			
			gotoxy(hOut, 0, Wall::ROW);

			cout << "得分： " << snake.getScore() << "分" << endl;
			Sleep(snake.getSleepTime());
		}
		else
		{
			isDead = true;
			break; 
		}

	}

	////测试
	//wall.setWall(5, 4, '=');
	//wall.setWall(5, 5, '=');
	//wall.setWall(5, 6, '@');

	//

	///*cout << wall.getWall(0, 0) << endl;
	//cout << wall.getWall(5, 4) << endl;
	//cout << wall.getWall(5, 6) << endl;*/



	 
	system("pause");
	return EXIT_SUCCESS;
}