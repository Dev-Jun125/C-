//176p. 1��
/*
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int kor, eng, math;
	double ave;
	string res;
	cout << "����, ����, ���� ������ �Է��ϼ���. :";
	cin >> kor >> eng >> math;
	ave = (kor + eng + math) / 3.0;
	if (ave >= 60) {
		res = ("�հ�");
	}
	else {
		res = ("���հ�");
	}
	cout << "=======================\n";
	cout << "����\t����\t����\t���\t���\n";
	cout << "-----------------------\n";
	cout << kor<<"\t" << eng<<"\t" << math<<"\t" << ave<<"\t"<< res<<endl;
}
*/
//176p. 2��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "�� ���� �Է��ϼ���. : ";
	cin >> a >> b;
	if (b == 0) {
		cout << "��° ���� 0�� �Է��Ͽ� ���� �� �����ϴ�.";
	}
	else {
		cout << a << "/" << b << "�� ����" << a / b << "�Դϴ�.";
	}
}
*/
//176p. 3��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int total = 0;
	cout << "1���� 100������ ���� ���ϴ� ���α׷��Դϴ�.\n";
	for (int i = 1; i <= 100; i = i + 2) {
		total = total + i;
	}
	cout << "1 + 3 + ---- + 99 = " << total;
}
*/
//177p.4��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int s,mil,mer, chi;
	int total = 0;
	cout << "���� <��:1, ��:2> ?";
	cin >> s;
	switch (s) {
	case 1: cout << "������ <��:1 �ƴϿ�:2>";
			cin >> mil;
			if (mil == 1) {
				total = total + 1;
			}
			else if (mil == 2) {
			}
			else {
				cout << " �߸��Է��ϼ̽��ϴ�.";
				break;
			}
			cout << "��ȥ <�� : 1 �ƴϿ� : 2>";
			cin >> mer;
			if (mer == 1) {
				total = total + 1;
			}
			else if (mer == 2) {
			}
			else {
				cout << " �߸��Է��ϼ̽��ϴ�.";
				break;
			}
			cout << ">> �� �������� " << total << "�Դϴ�.";

			break;

	case 2: cout << "��ȥ <�� : 1 �ƴϿ� : 2>";
			cin >> mer;
			if (mer == 1) {
				total = total + 1;
			}
			else if (mer == 2) {
				cout << ">> �� �������� " << total << "�Դϴ�.";
				break;
			}
			else {
				cout << " �߸��Է��ϼ̽��ϴ�.";
				break;
			}
			cout << "�ڳ�� :";
			cin >> chi;
			total = total + chi;
			cout << ">> �� �������� " << total << "�Դϴ�.";
			break;

	default :
		cout << "�߸��Է��ϼ̽��ϴ�."; break;
	}
}
*/
//177p. 5��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c;
	cout << "a���� �Է��ϼ���. :";
	cin >> a;
	cout << "b���� �Է��ϼ���. :";
	cin >> b;
	c = a - b;
	if (c >= 0) {
		cout << "ū ���� ���� ���� ���� ���� " << a / b << "�̰�, ����������" << a % b << "�Դϴ�.";
	}
	else  {
		cout << "ū ���� ���� ���� ���� ���� " << b / a << "�̰�, ����������" << b % a << "�Դϴ�.";
	}

}
*/
//177p.6��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d;
	double e, f;
	cout << "�߰���� ������ �Է��ϼ���. :";
	cin >> a;
	cout << "�⸻��� ������ �Է��ϼ���. :";
	cin >> b;
	cout << "����Ʈ ������ �Է��ϼ���. :";
	cin >> c;
	cout << "�⼮ ������ �Է��ϼ���. :";
	cin >> d;
	e = (a + b) / 2.0;
	f = (0.6 * e) + (0.2 * c) + (0.2 * d);
	cout << "���� = " << f << endl;
	if (f > 89.5) {
		cout << "���� = A\n";
		cout << "Excellent";
	}
	else if (f > 79.5) {
		cout << "���� = B\n";
		cout << "good";
	}
	else if (f > 69.5) {
		cout << "���� = C\n";
		cout << "fair";
	}
	else if (f > 59.5) {
		cout << "���� = D\n";
		cout << "Poor";
	}
	else {
		cout << "���� = F\n";
		cout << "Failure";
	}
}
*/
//178p.7��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a;
	cout << "������ �Է��ϼ���. (���� : ����):";
	cin >> a;
	if (a <= 1000) {
		cout << "������ " << a * 0.08 << "�����Դϴ�.";
	}
	else if (a <= 4000) {
		cout << "������ " << a * 0.17 << "�����Դϴ�.";
	}
	else if (a <= 8000) {
		cout << "������ " << a * 0.26 << "�����Դϴ�.";
	}
	else {
		cout << "������ " << a * 0.35 << "�����Դϴ�.";
	}
}
*/
//178p.8��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int time, money;
	cout << "�����ϵ��� ���� �ð��� �Է��Ͻÿ�. :";
	cin >> time;
	if (time > 30) {
		money = 30 * 3100 + (3100*1.2) * (time - 30);
	}
	else {
		money = 3100 * time;
	}
	if (money > 100000) {
		money = money - (0.1 * money);
	}
	else {
		money = money - (0.05 * money);
	}
	cout << "�ӱ��� " << money << "�� �Դϴ�.";
}
*/
//179p. 9��
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int x;
	cout << "x ���� �Է��ϼ���. --->";
	cin >> x;
	if (x <= 0) {
		cout << "�Լ��� ����� ����" << pow(x, 3) - (9 * x) + 2 << "�Դϴ�.";
	}
	else {
		cout << "�Լ��� ����� ����" << x * 7 + 2 << "�Դϴ�.";
	}
}
*/
//179p.10��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "a���� b���� �Է��Ͻÿ� . :";
	cin >> a >> b;
	if (a != 0) {
		cout << "���� " << (-b) / a << "�Դϴ�.";
	}
	else {
		if (b !=0) {
			cout << "�ذ� �����ϴ�.";
		}
		else {
			cout << "�ذ� ������ �����ϴ�.";
		}
	}
}
*/
//179p.11��
/*
#include <iostream>
using namespace std;
int main(void)
{
	double ph;
	cout << "�����̿��� �󵵸� �Է��Ͻÿ�. -->";
	cin >> ph;
	if (ph < 3.0) {
		cout << "���꼺�Դϴ�.";
	}
	else if (ph < 7.0) {
		cout << "�꼺�Դϴ�.";
	}
	else if (ph == 7.0) {
		cout << "�߼��Դϴ�.";
	}
	else if (ph > 7.0) {
		cout << "��Į�����Դϴ�.";.
	}
	else {
		cout << "����Į�����Դϴ�.";
	}
}
*/
//180p.12��
/*
#include <iostream>
using namespace std;
int main(void)
{
	char a;
	cout << "�� ���� ���ڸ� �Է��Ͻÿ�. :";
	cin >> a;
	switch (a) {
	case 'a':
		cout << a;
		break;

	case 'b':
		cout << a <<"\t"<< char (a - 1);
		break;
	case 'c':
		cout << a<<"\t" << char(a - 1)<<"\t" << char(a - 2);
		break;
	case 'd':
		cout << a<<"\t" << char(a - 1)<<"\t" << char(a - 2)<<"\t" << char(a - 3);
		break;
	default :
		cout << a;
		break;
	}

}
*/
//181p. 13��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int age, time, price;
	char ticket;
	cout << "�����ϰ��� �ϴ� ǥ�� �����̿���̸� y, �ƴϸ� n�� �����ּ���. -->";
	cin >> ticket;
	cout << "������� ���̸� �Է��ϼ��� :";
	cin >> age;
	cout << "���� �ð��� �ְ��̸� 1��, �߰�<5������>�� 2�� �Է��ϼ���.";
	cin >> time;
	switch (ticket) {
	case 'y':
		if (age <= 12 || age >= 65) {
			if (time == 1) {
				price = 25000; break;
			}
			else {
				price = 21000; break;
			}
		}
		else {
			if (time == 1) {
				price = 34000; break;
			}
			else if(time == 2) {
				price = 29000; break;
			}
			else {
				cout << "�߸��Է��ϼ̽��ϴ�.";
				break;
			}
		}
	case 'n':
		if (age <= 12 || age >= 65) {
			if (time == 1) {
				price = 20000; break;
			}
			else {
				price = 17000; break;
			}
		}
		else {
			if (time == 1) {
				price = 27000; break;
			}
			else if (time == 2) {
				price = 23000; break;
			}
			else {
				cout << "�߸��Է��ϼ̽��ϴ�.";
				break;
			}
		}
	default :
		cout << "�߸��Է��ϼ̽��ϴ�."; break;
	}
	cout << "����� " << price << "�� �Դϴ�.";
}
*/
//181p.14��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int age, kg;
	double cm, per;
	cout << "���̸� �Է��Ͻÿ�. :";
	cin >> age;
	cout << "Ű�� �Է��Ͻÿ�. :";
	cin >> cm;
	cout << "ü���� �Է��Ͻÿ�. :";
	cin >> kg;
	per = kg / ((cm * 0.01) * (cm * 0.01));
	cout << per<<endl;
	if (20 <= age <= 30) {
		if (per < 18) {
			cout << "��ü��";
		}
		else if (18 <= per < 24) {
			cout << "ǥ��ü��";
		}
		else if (24 <= per < 30) {
			cout << "��ü��";
		}
		else {
			cout << "��";
		}
	}
	else if (30 < age < 40) {
		if (per < 18.5) {
			cout << "��ü��";
		}
		else if (18.5 <= per < 25) {
			cout << "ǥ��ü��";
		}
		else if (25 <= per < 30) {
			cout << "��ü��";
		}
		else {
			cout << "��";
		}
	}
}
*/
//182p.15��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int month, a, kw;
	cout << "1.������ 2.���� 3.�Ϲݿ� -->";
	cin >> a;
	cout << "���� �Է��ϼ���. : ";
	cin >> month;
	cout << "���·��� �Է��Ͻÿ�. :";
	cin >> kw;
	switch (a) {
	case 1:
		if (month == 7 || month == 8) {
			cout << "���¿���� " << 4900 + 73.0 * kw << "�� �Դϴ�.";
		}
		else if(4<=month<=6 || month==9){
			cout << "���¿���� " << 4900 + 49.9 * kw << "�� �Դϴ�.";
		}
		else {
			cout << "���¿���� " << 4900 + 50.5 * kw << "�� �Դϴ�.";
		}
		break;
	case 2:
		if (month == 7 || month == 8) {
			cout << "���� Ȯ�����ּ���";
		}
		else if (4 <= month <= 6 || month == 9) {
			cout << "���¿���� " << 1070 + 36.4 * kw << "�� �Դϴ�.";
		}
		else {
			cout << "���� Ȯ�����ּ���.";
		}
		break;
	case 3:
		if (month == 7 || month == 8) {
			cout << "���¿���� " << 5320 + 94.2 * kw << "�� �Դϴ�.";
		}
		else if (4 <= month <= 6 || month == 9) {
			cout << "���¿���� " << 5320 + 62.7 * kw << "�� �Դϴ�.";
		}
		else {
			cout << "���¿���� " << 5320 + 66.8 * kw << "�� �Դϴ�.";
		}
		break;
	default:
		cout << "�߸��Է��ϼ̽��ϴ�.";
	}

}
*/