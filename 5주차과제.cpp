//227p. 1��
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
	cout << "�غ��� ���̿� ���̸� �Է��Ͻÿ�.";
	cin >> a >> b;
	cout << "�ﰢ���� ���̴� " << height(a, b) << "�Դϴ�.";
}
*/
//227p. 2��
/*
#include <iostream>
using namespace std;
void bs(int a, int b)
{
	
	if (a%b == 0)
		cout << a << "�� " << b << "�� ����Դϴ�.";
	else 
		cout << a << "�� " << b << "�� ����� �ƴմϴ�.";
	
}
int main(void)
{
	int a, b;
	cout << "����� �Ǵ��� �� ������ �Է����ּ���\n";
	cout << "ù ��° ���� : ";
	cin >> a;
	cout << "�� ��° ���� : ";
	cin >> b;
	bs(a, b);
	return 0;
}
*/
//228p. 3��
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
	cout << "ù��° ��ǥ���� �Է����ּ��� :";
	cin >> a >> b;
	cout << "�ι�° ��ǥ���� �Է����ּ���. :";
	cin >> c >> d;
	cout << "�� �� ������ �Ÿ��� " << gs(a, b, c, d) << "�Դϴ�.";
}
*/
//228p. 4��
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
	cout << "�� ���� �Է��ϼ���. -->";
	cin >> a >> b;
	cout << "��� ��� = " << sa(a, b) << " ���� ��� = " << gi(a, b) << " ��ȭ ��� = " << zo(a, b); 
}
*/
//228p. 5��
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
	cout << "�� ���� �Է��Ͻÿ�. : ";
	cin >> a >> b;
	for (i = 0; i <= a; i++) {
		c = power(i, b);
		sum = sum + c;
	}
	cout << "1^" << b << "+ -- +" << a << "^" << b << "������ �� = " << sum;
}
*/
//229p. 6��
/*
#include <iostream>
#include <cmath>
using namespace std;
void ec(int a, int b, int c)
{
	cout << "������������ ���� " << double((-b + sqrt(b * b - (4.0 * a * c))) / (a * 2.0)) << double((-b - sqrt(b * b - (4.0 * a * c))) / (2.0 * a)) << "�Դϴ�.";
}
double ecl(int a, int b, int c)
{
	return double(-b / (2 * a));
}
int main(void)
{
	int q, w, e, r;
	cout << "3���� ���� �Է� : ";
	cin >> q >> w >> e;
	r = w * w - (4 * q * e);
	if (r > 0)
	{
		ec(q, w, e);
	}
	else if (r == 0)
	{
		cout << "���������� ����" << ecl(q, w, e) << endl;
	}
	else {
		cout << "�Ǻ����� ���� ���� ���� �����ϴ�.";
	}

}
*/
//229p. 7��
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
		cout << "����Ͻ� ���� �Է����ּ���. :";
		cin >> a;
		cout << "���� �� �Է�";
		cin >> b;
		if (b >= 0) {
			cout << pow(a, b) << endl;
		}
		else if(b < 0) {
			cout << nk(a, b) << endl;
		}
			
		cout << "�ٽ� ����Ͻðڽ��ϱ�? y,n : ";
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
//230p. 8��
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
	cout << "�������� ���� ���� �Է��ϼ���. :";
	cin >> a;
	cout << "�Լ��� ���� ���� " <<root(a) << "�Դϴ�.\n";
	cout << "���̺귯���� ���� ���� " << sqrt(a) << "�Դϴ�.\n";
}
*/
//230p. 9��
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
	cout << "������ �Է����ּ���. :";
	cin >> a;
	if (event(a) == 1) {
		cout << "�־��� ������ ¦���Դϴ�.\n";
	}
	else {
		cout << "�־��� ������ Ȧ���Դϴ�.\n";
	}
	cout << "�־��� ������ ���밪�� " << absolute(a) << "�Դϴ�.\n";
	if (sign(a) == 1) {
		cout << "�־��� ������ ����Դϴ�.";
	}
	else if (sign(a) == -1) {
		cout << "�־��� ������ �����Դϴ�.";
	}
	else if (sign(a) == 0) {
		cout << "�־��� ������ 0�Դϴ�.";
	}
}
*/
//231p. 10��
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
	cout << "1. ���� ���� 2. �ﰢ���� ���� 3. �簢���� ����\n���ϰ��� �ϴ� ������ ��ȣ�� �Է��Ͻÿ�..->";
	cin >> w;
	switch (w)
	{
	case 1: {
		cout << "�������� �Է��Ͻÿ� . -->";
		cin >> r;
		cout << "���� ���̴� " << sp(r) << endl;
		break;
	}
	case 2: {
		cout << "�غ��� ���̸� �Է��Ͻÿ�. -->";
		cin >> l >> h;
		cout << "�ﰢ���� ���̴� " << tr(l, h) << endl;
		break;
	}
	case 3: {
		cout << "�غ��� ���̸� �Է��Ͻÿ�. -->";
		cin >> l >> h;
		cout << "�簢���� ���̴� " << qu(l, h) << endl;
		break;
	}
	default: {
		cout << "�߸��Է��ϼ̽��ϴ�.";
		break;
	}

	}
}
*/
//231p. 11��
/*
#include <iostream>
using namespace std;
void age()
{
	int a, b;
	char yn;
	cout << "����⵵�� �Է��Ͻÿ�. :";
	cin >> a;
	cout << "�¾ �⵵�� �Է��Ͻÿ�. :";
	cin >> b;
	cout << "������ ��������? <y,n> :";
	cin >> yn;
	if (yn == 'y') {
		cout << "�� ���̴� " << (a - b) << "�Դϴ�.";
	}
	else {
		cout << "�� ���̴� " << (a - b - 1) << "�Դϴ�.";
	}
}
int main(void)
{
	age();
}
*/
