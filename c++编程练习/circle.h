#pragma once
#include<iostream>
#include"piont.h"

using namespace std;

class circle{
public:
	void setr(int );
	void setcent(point); 
	int getr();
	point getcenter();
		


private:
	int r;
	point center;

};

