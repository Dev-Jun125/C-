/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle circleArray[3];

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << circleArray[i].getArea() << endl;

	}
	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << (p + i)->getArea() << endl;
	}
}
*/
/*
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() {
		red = green = blue = 0;
	}
	Color(int r, int g, int b) {
		red = r; green = g; blue = b;
	}
	void setColor(int r, int g, int b) {
		red = r; green = g; blue = b;
	}
	void show() {
		cout << red << '  ' << green << '  ' << blue << endl;
	}
};
int main()
{
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;
	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);
	(p + 0)->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);

	for (int i = 0; i < 3; i++) {
		p[i].show();
		(p + i)->show();
	}
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
	cout << "입력할 정수의 개수는 ?";
	int n;
	cin >> n;
	if (n <= 0) return 0;

}
*/
/*
#include <iostream>
#include <string>
using namespace std;
void star(int a = 5);
void msg(int id, string text = " ");
void star(int a)
{
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl;
}
void msg(int id, string text)
{
	cout << id << " " << text << endl;
}
int main()
{
	star();
	star(10);

	msg(10);
	msg(10, "hello");
}
*/
/*
#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);
void f(char c, int line)
{
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}

int main()
{
	f();
	f('%');
	f('@', 5);
}
*/
/*
#include <iostream>
using namespace std;

class Person {
public:
	double money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};
int Person::sharedMoney = 10;

int main()
{
	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << " " << lee.sharedMoney << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Person {
public:
	double money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};
int main()
{
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);
	cout << han.money << "  " << Person::sharedMoney << endl;
}
*/
/*
#include <iostream>
using namespace std;
int add(int* a, int f) {
	int sum = 0;
	for (int i = 0; i < f; i++) {
		sum = sum + (*a + i);

	}
	return 	sum;
}
int add(int* a, int f, int* b) {
	int sum = 0;
	for (int i = 0; i < f; i++) {
		sum = sum + (*a + i) + (*b + i);
	}
	return sum;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
*/
/*
#include <iostream>
using namespace std;
int add(int* a, int f, int *b = NULL) {
	int sum = 0;
	for (int i = 0; i < f; i++) {
		if (b == NULL) {
			sum = sum + (*a + i);
		}
		else {
			sum = sum + *(a + i) + *(b + i);
		}

	}
	return sum;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint() {
		cout << color << ":";
		showPoint();
	}
};

int main()
{
	Point p;
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV() {
		size = 20;
	}
	TV(int size) {
		this->size = size;
	}
	int getSize() {
		return size;
	}
};

class WideTV :public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) :TV(size) {
		this->videoln = videoln;
	}
	bool getVideoln() {
		return videoln;
	}
};

class SmartTV :public WideTV {
	string ipaddr;
public:
	SmartTV(string ipaddr, int size) : WideTV(size, true) {
		this->ipaddr = ipaddr;
	}
	string getipaddr() {
		return ipaddr;
	}
};

int main() {
	SmartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "videoln = " << boolalpha << htv.getVideoln() << endl;
	cout << "IP = " << htv.getipaddr() << endl;
}
*/
/*
#include <iostream>
using namespace std;
class Adder {
protected:
	int add(int a, int b) {
		return a + b;
	}
};
class Subtractor {
protected:
	int minus(int a, int b) {
		return a - b;
	}
};
class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b) {
		int res = 0;
		switch (op) {
		case '+': res = add(a, b); break;
		case '-': res = minus(a, b); break;
		}
		return res;
	}
};

int main()
{
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;

}
*/
/*
#include <iostream>
using namespace std;

class Shape {
public: 
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
};
class Circle :public Shape {
public:
	virtual void draw() {
		cout << "Circle::draw() called" << endl;
	}
};
int main()
{
	Shape* pShape = new Circle();
	pShape->paint();
	delete pShape;
}
*/
#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
	
};
class Circle :public Shape {
public:
	virtual void draw() {
		Shape::draw();
		cout << "Circle" << endl;
	}

};
