#pragma once
#include<iostream>
#include"wall.h"
#include"food.h"
using namespace std;

class Snake
{
public:

	Snake(Wall& tempwall, Food& food);

	enum
	{
		UP = 'w',
		DOWN = 's',
		LEFT = 'a',
		RIGHT = 'd'
	};

	//���
	struct Point
	{
		//������
		int x;
		int y;

		//ָ����
		Point* next;

	};

	//��ʼ����
	void initSnake();

	//���ٽ��
	void destoryPoint();

	//��ӽ��
	void addPoint(int x, int y);

	//ɾ�����
	void delPoint();

	//�ƶ��߲���
	bool move(char key);	//����ֵ�����ƶ��Ƿ�ɹ�

	//�趨�Ѷ�
	//��ȡˢ��ʱ��
	int getSleepTime();

	//��ȡ�ߵ����
	int countList();

	//��ȡ����
	int getScore();


	Point* pHead;
	Wall& wall;
	Food& food;
	bool isRool;
};