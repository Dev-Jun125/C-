//227p. 1번
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
//227p. 2번
/*
#include <iostream>
using namespace std;
void bs(int a, int b)
{
	
	if (a%b == 0)
		cout << a << "는 " << b << "의 배수입니다.";
	else 
		cout << a << "는 " << b << "의 배수가 아닙니다.";
	
}
int main(void)
{
	int a, b;
	cout << "배수를 판단할 두 정수를 입력해주세요\n";
	cout << "첫 번째 정수 : ";
	cin >> a;
	cout << "두 번째 정수 : ";
	cin >> b;
	bs(a, b);
	return 0;
}
*/
//228p. 3번
/*
#include <iostream>
#include <cmath>
using namespace std;
double gs(double x1, double x2, double y1, double y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main(void)
{
	double a, b, c, d;
	cout << "첫번째 좌표값을 입력해주세요 :";
	cin >> a >> b;
	cout << "두번째 좌표값을 입력해주세요. :";
	cin >> c >> d;
	cout << "두 점 사이의 거리는 " << gs(a, b, c, d) << "입니다.";
}
*/
//228p. 4번
/*
#include <iostream>
#include <cmath>
using namespace std;
double sa(int n, int m)
{
	return (n + m) / 2.0;
}
double gi(int n, int m)
{
	return (sqrt(n * m));
}
double zo(int n, int m)
{
	return (2.0 *(n * m) / (n + m));
}
int main(void)
{
	int a, b;
	cout << "두 수를 입력하세요. -->";
	cin >> a >> b;
	cout << "산술 평균 = " << sa(a, b) << " 기하 평균 = " << gi(a, b) << " 조화 평균 = " << zo(a, b); 
}
*/
//228p. 5번
/*
#include <iostream>
#include <cmath>
using namespace std;

int power(int n, int k)
{
	return pow(n, k);
}
int main(void)
{
	int a, b, i,c, sum = 0;
	cout << "두 수를 입력하시오. : ";
	cin >> a >> b;
	for (i = 0; i <= a; i++) {
		c = power(i, b);
		sum = sum + c;
	}
	cout << "1^" << b << "+ -- +" << a << "^" << b << "까지의 합 = " << sum;
}
*/
//229p. 6번
/*
#include <iostream>
#include <cmath>
using namespace std;
void ec(int a, int b, int c)
{
	cout << "이차방정식의 근은 " << double((-b + sqrt(b * b - (4.0 * a * c))) / (a * 2.0)) << double((-b - sqrt(b * b - (4.0 * a * c))) / (2.0 * a)) << "입니다.";
}
double ecl(int a, int b, int c)
{
	return double(-b / (2 * a));
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
		cout << "이차방정식 근은" << ecl(q, w, e) << endl;
	}
	else {
		cout << "판별식의 값이 음수 근이 없습니다.";
	}

}
*/
//229p. 7번
/*
#include <iostream>
#include <cmath>
using namespace std;
double nk(double n, double k)
{
	return (1.0 / pow(n, k));
}
int main(void)
{
	char yn;
	signed double a, b;
	while (true) {
		cout << "계산하실 값을 입력해주세요. :";
		cin >> a;
		cout << "정수 값 입력";
		cin >> b;
		if (b >= 0) {
			cout << pow(a, b) << endl;
		}
		else if(b < 0) {
			cout << nk(a, b) << endl;
		}
			
		cout << "다시 계산하시겠습니까? y,n : ";
		cin >> yn;
		if (yn == 'y') {
			continue;
		}
		else {
			break;
		}
	}
}
*/
//230p. 8번
/*
#include <iostream>
#include <cmath>
using namespace std;
double root(double a)
{
	double x, temp;
	x = 0.5 * (1 + (a / 1));
	while (true)
	{
		temp = x;
		x = 0.5 * (x + (a / x));
		if ((temp - x) < 0.0000001)
			break;
	}
	return x;
}
int main(void)
{
	int a;
	cout << "제곱근을 구할 수를 입력하세요. :";
	cin >> a;
	cout << "함수에 의한 값은 " <<root(a) << "입니다.\n";
	cout << "라이브러리에 의한 값은 " << sqrt(a) << "입니다.\n";
}
*/
//230p. 9번
/*
#include <iostream>
#include <cmath>
using namespace std;
int event(int n)
{
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int absolute(int n)
{
	return abs(n);
}
int sign(int n)
{
	if (n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		return -1;
	}
}
int main(void)
{
	int a;
	cout << "정수를 입력해주세요. :";
	cin >> a;
	if (event(a) == 1) {
		cout << "주어진 정수는 짝수입니다.\n";
	}
	else {
		cout << "주어진 정수는 홀수입니다.\n";
	}
	cout << "주어진 정수의 절대값은 " << absolute(a) << "입니다.\n";
	if (sign(a) == 1) {
		cout << "주어진 정수는 양수입니다.";
	}
	else if (sign(a) == -1) {
		cout << "주어진 정수는 음수입니다.";
	}
	else if (sign(a) == 0) {
		cout << "주어진 정수는 0입니다.";
	}
}
*/
//231p. 10번
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
	int w, r, l, h;
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
//231p. 11번
/*
#include <iostream>
using namespace std;
void age()
{
	int a, b;
	char yn;
	cout << "현재년도를 입력하시오. :";
	cin >> a;
	cout << "태어난 년도를 입력하시오. :";
	cin >> b;
	cout << "생일이 지났나요? <y,n> :";
	cin >> yn;
	if (yn == 'y') {
		cout << "만 나이는 " << (a - b) << "입니다.";
	}
	else {
		cout << "만 나이는 " << (a - b - 1) << "입니다.";
	}
}
int main(void)
{
	age();
}
*/
