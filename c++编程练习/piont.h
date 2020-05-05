#pragma once
#include<iostream>
using namespace std;

class point {
public:
	void setx(int );
	void sety(int);
	int getx();
	int gety();
private:
	int x;
	int y;
};