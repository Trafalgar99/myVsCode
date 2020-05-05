//设计一个圆形类（AdvCircle），和一个点类（Point），计算点和圆的关系。
#include<iostream>
#include"circle.h"
using namespace std;
void compare(circle	 c,point z) {
	 const int dis = (z.getx() - c.getcenter().getx()) * (z.getx() - c.getcenter().getx()) + (z.gety() - c.getcenter().gety()) * (z.gety() - c.getcenter().gety());
	if (c.getr() * c.getr() == dis) {
		cout << "点在圆上" << endl;
	}
	else if (c.getr() * c.getr() < dis) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
	//c.setr(100);

}

int main() {
	circle c;
	point p;
	p.setx(10);
	p.sety(100);
	point cen;
	cen.setx(1);
	cen.sety(1);
	c.setr(10);
	c.setcent(cen);
//	cout << c.getr() << endl;
	compare(c, p);
//	cout << c.getr() << endl ;


	system("pause");
	return 0;
}
