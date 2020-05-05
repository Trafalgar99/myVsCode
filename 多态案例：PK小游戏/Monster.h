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
	int m_Atk;  //攻击力
	int m_Def;  //防御力
	int m_Hp;  //血量
	bool m_Hold;//是否被定身

	void Attack(Hero*hero);
};	