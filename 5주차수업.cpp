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
/*
#include <iostream>
using namespace std;
void height(double len, double deg) 
{
	len* tan(deg * 3.141592 / 180);
	cout << "�غ��� ���̿� ���̸� �Է��Ͻÿ�.";
	cin >> a >> b;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
void ec(int a, int b, int c)
{
	cout << "������������ ���� " << double (-b + sqrt(b * b - 4.0 * a * c) /( a * 2.0)) << double ((-b - sqrt(b * b - (4.0 * a * c))) / (2.0 * a)) << "�Դϴ�.";
}
double ecl(int a, int b, int c)
{
	return double (-b / (2 * a));
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
		cout << "���������� ����" <<ecl(q, w, e)<<endl;
	}
	else {
		cout << "�Ǻ����� ���� ���� ���� �����ϴ�.";
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
