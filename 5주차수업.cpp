/*
#include <iostream>
#include <cmath>
using namespace std;
double height(double len, double deg)
{
	return len * tan(deg * 3.141592 / 180);
}
void main()
{
	double a, b;
	cout << "밑변의 길이와 높이를 입력하시오.";
	cin >> a >> b;
	cout << "삼각형의 높이는 " << height(a, b) << "입니다.";
}
*/
/*
#include <iostream>
using namespace std;
void height(double len, double deg) 
{
	len* tan(deg * 3.141592 / 180);
	cout << "밑변의 길이와 높이를 입력하시오.";
	cin >> a >> b;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
void ec(int a, int b, int c)
{
	cout << "이차방정식의 근은 " << double (-b + sqrt(b * b - 4.0 * a * c) /( a * 2.0)) << double ((-b - sqrt(b * b - (4.0 * a * c))) / (2.0 * a)) << "입니다.";
}
double ecl(int a, int b, int c)
{
	return double (-b / (2 * a));
}
int main(void)
{
	int q, w, e, r;
	cout << "3가지 정수 입력 : ";
	cin >> q >> w >> e;
	r = w * w - (4 * q * e);
	if (r > 0)
	{
		ec(q, w, e);
	}
	else if (r == 0)
	{
		cout << "이차방정식 근은" <<ecl(q, w, e)<<endl;
	}
	else {
		cout << "판별식의 값이 음수 근이 없습니다.";
	}

}
*/
/*
#include <iostream>
using namespace std;
double sp(int n)
{
	return n * n * 3.14;
}
double tr(int n, int m)
{
	return n * m / 2.0;
}
double qu(int n, int m)
{
	return n * m;
}
int main(void)
{
	int w, r,l,h;
	cout << "1. 원의 넓이 2. 삼각형의 넓이 3. 사각형의 넓이\n구하고자 하는 도형의 번호를 입력하시오..->";
	cin >> w;
	switch (w)
	{
	case 1: {
		cout << "반지름을 입력하시오 . -->";
		cin >> r;
		cout << "원의 넓이는 " << sp(r) << endl;
		break;
	}
	case 2: {
		cout << "밑변과 높이를 입력하시오. -->";
		cin >> l >> h;
		cout << "삼각형의 넓이는 " << tr(l, h) << endl;
		break;
	}
	case 3: {
		cout << "밑변과 높이를 입력하시오. -->";
		cin >> l >> h;
		cout << "사각형의 넓이는 " << qu(l, h) << endl;
		break;
	}
	default: {
		cout << "잘못입력하셨습니다.";
		break;
	}
		
	}
}
*/
