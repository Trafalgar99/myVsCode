#pragma once
#include"Identity.h"
#include<iostream>
#include<string>;
#include"orderFile.h"
#include<vector>
using namespace std;

//��ʦ��
class Teacher :public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId,string name,string pwd);

	//�˵�����
	virtual void operMenu();

	//�鿴����ѧ��ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	//ְ����
	int m_EmpId;
};
