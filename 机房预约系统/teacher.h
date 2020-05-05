#pragma once
#include"Identity.h"
#include<iostream>
#include<string>;
#include"orderFile.h"
#include<vector>
using namespace std;

//教师类
class Teacher :public Identity
{
public:
	//默认构造
	Teacher();

	//有参构造
	Teacher(int empId,string name,string pwd);

	//菜单界面
	virtual void operMenu();

	//查看所有学生预约
	void showAllOrder();

	//审核预约
	void validOrder();

	//职工号
	int m_EmpId;
};
