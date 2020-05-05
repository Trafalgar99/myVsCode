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
	//������������
	srand((unsigned int)time(NULL));

	//�Ƿ�������ʶ
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
	cout << "�÷֣� " << snake.getScore() << "��" << endl;

	//gotoxy(hOut,10, 5);		//y*2  x	 
	
	//�����û�������
	while (!isDead)
	{
		char key = _getch();

		//����ǵ�һ�ΰ�������Ų��ܼ�����Ϸ
		//�ж���һ�ε��ƶ�����
		if (preKey==NULL&&key == snake.LEFT)
		{
			continue;
		}

		do
		{
			if (key==snake.LEFT|| key == snake.DOWN|| key == snake.RIGHT|| key == snake.UP)
			{

				//�жϱ��ΰ����Ƿ����ϴγ�ͻ
				if ((key == snake.LEFT && preKey == snake.RIGHT)||
					(key == snake.RIGHT && preKey == snake.LEFT)||
					(key == snake.DOWN && preKey == snake.UP)||
					(key == snake.UP&& preKey == snake.DOWN))
				{
					key = preKey;
				}
				else
				{
					preKey = key;		//���ǳ�ͻ���������Ը��°���
				}

				if (snake.move(key) == true)
				{
					//�ƶ��ɹ�
					//system("cls");
					//wall.drawWall();
					gotoxy(hOut, 0, Wall::ROW);
					cout << "�÷֣� " << snake.getScore() << "��" << endl;
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
				key = preKey;		//ǿ�ƽ����󰴼���Ϊ��һ�ΰ���
			}

			
		} while (!_kbhit());		//��û�м�������ʱ����0

		if (snake.move(key) == true)
		{
			//�ƶ��ɹ�
			//system("cls");
			//wall.drawWall();
			
			
			
			gotoxy(hOut, 0, Wall::ROW);

			cout << "�÷֣� " << snake.getScore() << "��" << endl;
			Sleep(snake.getSleepTime());
		}
		else
		{
			isDead = true;
			break; 
		}

	}

	////����
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