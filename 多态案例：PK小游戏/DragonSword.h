#pragma once
#include<iostream>
#include"weapon.h"
using namespace std;

class DragonSword :public Weapon {
public:
	DragonSword();

	//��ȡ�����˺�
	virtual int getBaseDamage();

	//��ȡ��Ѫ
	virtual int getSuckBlood();

	//��ȡ�Ƿ���
	virtual bool getHold();

	//��ȡ�Ƿ񱩻�
	virtual bool getCrit();

	//��Ѫ�ʣ�������,������	
	int suckRate;
	int holdRate;
	int critRate;

	//������ʣ��ж��Ƿ񴥷�
	bool isTrigger(int rate);

};