#pragma once
#include<iostream>
#include"weapon.h"
#include"Hero.h"
using namespace std; 

class Hero;

class Monster {
public:
	Monster();
	string m_Name;
	int m_Atk;  //������
	int m_Def;  //������
	int m_Hp;  //Ѫ��
	bool m_Hold;//�Ƿ񱻶���

	void Attack(Hero*hero);
};	