#include"circle.h"
using namespace std;

void circle::setcent(point p) {

	center = p;
}
void circle::setr(int mr) {
	r = mr;
}

int circle::getr() {
	return r;
}

point circle:: getcenter() {
	return center;
}