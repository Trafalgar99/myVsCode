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

	//结点
	struct Point
	{
		//数据域
		int x;
		int y;

		//指针域
		Point* next;

	};

	//初始化蛇
	void initSnake();

	//销毁结点
	void destoryPoint();

	//添加结点
	void addPoint(int x, int y);

	//删除结点
	void delPoint();

	//移动蛇操作
	bool move(char key);	//返回值代表移动是否成功

	//设定难度
	//获取刷屏时间
	int getSleepTime();

	//获取蛇的身段
	int countList();

	//获取分数
	int getScore();


	Point* pHead;
	Wall& wall;
	Food& food;
	bool isRool;
};