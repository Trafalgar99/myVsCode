#pragma once
#include<iostream>
#include"wall.h"
using namespace std;

class Food
{
public:

	Food(Wall&tempwall);
	
	//����ʳ��
	void setFood();



	int foodx;
	int foody;

	Wall& wall;

};
