#include"snake.h"
#include<Windows.h>


void gotoxy1(HANDLE hOut1, int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hOut1, pos);
}
HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE);

Snake::Snake(Wall &tempwall,Food&tempfood) :wall(tempwall), food(tempfood)
{
	pHead = NULL;
	this->isRool = false;	
}

void Snake::initSnake()
{
	destoryPoint();

	addPoint(5, 3);
	addPoint(5, 4);
	addPoint(5, 5);
}

//�������н��
void Snake::destoryPoint()
{
	Point* pCur = pHead;
	while (pHead)
	{
		pCur = pHead->next;
		delete pHead;
		 
		pHead = pCur;
	}
}

void Snake::addPoint(int x, int y)
{

	//�����½��
	Point* newPoint = new Point;
	newPoint->x = x;
	newPoint->y = y;
	newPoint->next = NULL; 

	//���ԭ��ͷ��Ϊ�գ���Ϊ����
	if (pHead)
	{
		wall.setWall(pHead->x,pHead->y,'=');
		gotoxy1(hOut1, pHead->y * 2, pHead->x);
		cout << "=";

	}

		newPoint->next = pHead;

		pHead = newPoint;	//����ͷ��

		wall.setWall(pHead->x, pHead->y, '@');
		gotoxy1(hOut1, pHead->y * 2, pHead->x);
		cout << "@";

}

//ɾ�����
void Snake::delPoint()
{
	//����������ϲ�ȥ��ɾ��
	if (pHead==NULL||pHead->next==NULL)
	{
		return;
	}
	Point* pCur = pHead->next;
	Point* pPre = pHead;

	while (pCur->next)
	{
		pPre = pPre->next;
		pCur = pCur->next;
	}
	//ɾ��β���
	wall.setWall(pCur->x, pCur->y, ' ');
	gotoxy1(hOut1, pCur->y * 2, pCur->x);
	cout << " ";
	 

	delete pCur;

	pCur = NULL;
	pPre->next = NULL;
}

bool Snake::move(char key)
{
	int x = pHead->x;
	int y = pHead->y;

	switch (key)
	{
	case UP:
		x--; 
		break;
	case DOWN:
		x++;
		break;
	case LEFT:
		y--;
		break;
	case RIGHT:
		y++;
		break;
	}

	//�ж� �����һ����������β�ͣ���Ӧ������
	Point* pCur = pHead->next;
	Point* pPre = pHead;

	while (pCur->next)
	{
		pPre = pPre->next;
		pCur = pCur->next;
	}
	if (pCur->x == x && pCur->y == y)
	{
		//����β�� ѭ��
		isRool = true;
	}
	else
	{
		//�ж��û�Ҫ�����λ���Ƿ�ɹ�
		if (wall.getWall(x, y) == '*' || wall.getWall(x, y) == '=')
		{
			addPoint(x, y);
			delPoint();
			system("cls");
			wall.drawWall();
			cout << "GAME OVER" << endl;
			cout << "�÷֣� " << getScore() << "��" << endl;
			return false;
		}

	}

	//�ƶ��ɹ�������
	//�Ե�ʳ��  δ�Ե�ʳ��
	if (wall.getWall(x, y) == '#')
	{
		addPoint(x, y);

		//��������ʳ��
		food.setFood();
	}
	else
	{
		addPoint(x, y);
		delPoint();

		if (isRool==true) 
		{
			wall.setWall(x, y, '@');
			gotoxy1(hOut1,y * 2,x);
			cout << "@";
		}
		
	}

	return true;
}

int Snake::getSleepTime()
{
	int sleepTime = 0;
	int size = countList();
	if (size < 5)
	{
		sleepTime = 300;
	}
	else if(size<=5&&size<=8)
	{
		sleepTime = 200;
	}
	else
	{
		sleepTime = 100;
	}
	return sleepTime;
}

int Snake::countList()
{
	int size = 0;
	Point* curPoint = pHead;
	while (curPoint)
	{
		size++;
		curPoint = curPoint->next;
	}
	return size;
}

int Snake::getScore()
{
	int size = countList();
	int score = size * 100-300;
	return score;
}
