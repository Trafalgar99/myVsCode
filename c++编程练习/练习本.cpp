//���һ��Բ���ࣨAdvCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
#include<iostream>
#include"circle.h"
using namespace std;
void compare(circle	 c,point z) {
	 const int dis = (z.getx() - c.getcenter().getx()) * (z.getx() - c.getcenter().getx()) + (z.gety() - c.getcenter().gety()) * (z.gety() - c.getcenter().gety());
	if (c.getr() * c.getr() == dis) {
		cout << "����Բ��" << endl;
	}
	else if (c.getr() * c.getr() < dis) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
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
