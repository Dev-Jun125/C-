//183p. 16��
/*
#include <iostream>
using namespace std;
int main(void)
{
	double tot = 0;
	double p;
	int menu, x;
	char yn;
	cout << "�Ƶ����� �޴���\n";
	cout << "1. Regular Hamburger\t$0.89\n";
	cout << "2.Regular Cheesebuger\t$0.99\n";
	cout << "3.Fish Sandwich\t$1.29\n";
	cout << "4.Half-pounder with cheese\t$2.49\n";
	cout << "5.French fries\t$0.79\n";
	cout << "6.Large soft drink\t$0.99\n";
	cout << "***********************************\n";

	while (true) {
		cout << "select 1, 2, 3, 4, 5 or 6 -->";
		cin >> menu;
		cout << "�ֹ��� ������ �Է��Ͻÿ�.:";
		cin >> x;
		switch (menu)
		{
		case 1: p = 0.89; break;
		case 2: p = 0.99; break;
		case 3: p = 1.29; break;
		case 4: p = 2.49; break;
		case 5: p = 0.79; break;
		case 6: p = 0.99; break;
		}
		tot = (tot + (p * x));
		cout << "�߰��� �ֹ� �Ͻðڽ��ϱ�? y, n-->";
		cin >> yn;
		if (yn == 'n') {
			cout << "Please pay [" << tot * 1.055 << "$]"; 
			break;
		}
			
		else if (yn == 'y') {

		}
		else {
			cout << "�߸��Է��ϼ̽��ϴ�.";
			break;
		}
	}
}
*/
//183p. 17��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int f, x, p = 0, tot = 0;
	char yn;
	while (true) {
		cout << "����� � ������ �����Ͻʴϱ�?\n";
		cout << "1.���\t2.�ٳ���\t3.������\n";
		cout << "���ϴ� ������ ��ȣ�� �Է��Ͻÿ�. ->";
		cin >> f;
		cout << "����� ������ ������ ������ �Է��Ͻÿ�. ->";
		cin >> x;
		
		switch (f) {
		case 1: p = 500; break;
		case 2: p = 800; break;
		case 3: p = 1000; break;
		}
		tot = tot + p * x;
		cout << "-�߰�- ��� �ٸ� ������ ������ ���Ͻø� 'y', �ƴϸ� 'n' ->";
		cin >> yn;
		if (yn == 'n') {
			cout << "����� ������ ������ " << tot << "�� �Դϴ�.";
			break;
		}

		else if (yn == 'y') {

		}
		else {
			cout << "�߸��Է��ϼ̽��ϴ�.";
			break;
		}
	}
}
*/
// 184p.18��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d, tot = 0;
	char ageyn, plusyn;
	while (true) {
		cout << "������ ��ȣ�� �Է��Ͻÿ�. -->";
		cin >> a;
		switch(a) {
		case 1: b = 25000; break;
		case 2: b = 18000; break;
		case 3: b = 12000; break;
		case 4: b = 20000; break;
		}
		cout << "�����ϰ��� �ϴ� ǥ�� ������ �Է��Ͻÿ�. -->";
		cin >> c;
		cout << "��̸� y �л��̸� n -->";
		cin >> ageyn;
		if (ageyn == 'y') {
			cout << "�����̹Ƿ� �������� �ʽ��ϴ�.\n";
		}
		else if (ageyn == 'n') {
			b = b * 0.5;
		}
		else {
			cout << "�߸��Է��ϼ̽��ϴ�.\n";
			break;
		}
		tot = tot + b * c;
		cout << "�� �����Ͻðڽ��ϱ�? y, n-->";
		cin >> plusyn;
		if (plusyn == 'n') {
			cout << "���� ����� <" << tot << "��> �Դϴ�.";
			break;
		}

		else if (plusyn == 'y') {

		}
		else {
			cout << "�߸��Է��ϼ̽��ϴ�.\n";
			break;
		}
	}
}
*/
//184p. 19��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j;
	double pi = 0;
	for (i = 0; i < 50000; i++) {
		if (i % 2 == 0) {
			pi = pi + (4.0 / ((2 * i) + 1));

		}
		else if (i % 2 == 1) {
			pi = pi - (4.0 / ((2 * i) + 1));
		}
	}
	cout << pi;
}
*/
//185p.20��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i;
	cout << "���󰡰� \t 30���ϰ���\n";
	for (i = 10000; i <= 20000; i = i + 1000) {
		cout << i << "��\t\t" << i*0.7 << "��" << endl;
	}
}
*/
//185p.21��
/*
#include<iostream>
using namespace std;
int main(void)
{
	int  a, b, i;
	for (i = 1; i <= 5; i++)
	{
		cout << "���� #" << i << "�� ����:";
		cin >> a;
		if (a <= 50){
			for (b = 1; b <= a; b++)
			{
				cout << "*";
			}
		}
		else {
			cout << "�߸��Է��ϼ̽��ϴ�.";
		}
		
		cout << "\n";
	}
}
*/
//186p.22��
/*
#include<iostream>
using namespace std;
int main(void)
{
	int i;
	cout << "����\t30%\t50%\t70%\n";
	for (i = 10000; i <= 50000;i += 5000)
	{		
		cout << i <<"\t"<< i *0.7<<"\t" << i * 0.5<< "\t"<< i * 0.3 <<"\n";
	}
}
*/
//186p. 23��
/*
#include<iostream>
using namespace std;
int main(void)
{
	int a, i, sum = 0;
	cout << "������ �Է��Ͻÿ�.:";
	cin >> a;
	cout << a << "\t1����" << a << "������ ��\n";
	for (i = 1; i <= a; i++)
	{
		sum = sum + i;
		cout << i<<"\t" << sum << endl;
	}
}
*/
//186p.24��
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	int i, b;
	cout << "���� :";
	cin >> b;
	cout << "����\t������\n";
	for (i = 0; i < 10; i++) {
		
		cout << i+1 << "\t" << double (b * pow((1.07), i)) <<"\n";
	}
}
*/
//187p.25��
/*
#include<iostream>
using namespace std;
int main(void)
{
	int start, day = 0, date;
	cout << "���ۿ��� �Է� :";
	cin >> start;
	cout << "��\t��\tȭ\t��\t��\t��\t��\n";
	for (day = 0; day < start; day++) {
		cout << "\t";
	}
	for (date = 1; date <= 31; date++) {
		day = day + 1;
		if (day == 7)
		{
			cout << date << "\n";
			day = 0;
		}
		else
			cout << date << "\t";
	}

}
*/
//188p.26��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j;
	cout << "\t������\n";

	for (i = 1; i <= 9; i=i+3) {
		cout << i << "��\t" << i + 1 << "��\t" << i + 2 << "��\n";
		for (j = 1; j <=9; j++) {
			cout << i << "*" << j << "=" << i * j << "\t" << i + 1 << "*" << j << "=" << (i + 1) * j << "\t" << i + 2 << "*" << j << "=" << (i + 2) * j << "\n";
		}
		cout << "\n";
	}
}
*/
//188p.27��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	for (a = 0; a < 26; a++) {
		for (b = 25; b >= 0; b--) {
			if (b > a) {
				cout << " ";
			}
			else {
				cout << char('z' - b);
			}

		}
		cout << "\n";
	}
}
*/
//189p.28��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j, k,sum;
	cout << "������ �����ϴ� ���� ������ �����ϴ�.\n";

	for(i=0;i<=5;i++)
		for(j=0;j<=5;j++)
			for (k = 0; k <= 5; k++) {
				sum = 2 * i + 3 * j + 5 * k;
				if (sum == 24) {
					cout << "2g ��" << i << "�� 3g ��" << j << "�� 5g ��" << k << "��\n";
				}
			}
}
*/
//189p.30��
/*
#include <iostream>
using namespace std;
int main(void)
{
	double l, km, yn;
	double kml;
	while (true)
	{
		cout << "������ ���� �Է��Ͻÿ�.<��> :";
		cin >> l;
		cout << "����Ÿ��� �Է��Ͻÿ�. :";
		cin >> km;
		kml = 1.0*km / l;
		cout << "����� " << kml << "km/l�Դϴ�..";
		cout << "�ٽ� ����Ͻðڽ��ϱ�?\n";
		cin >> yn;
		if (yn == 1) {
			continue;
		}
		else if (yn == 0) {
			break;
		}
		else {
			cout << "�߸��Է��ϼ̴ϴ�.";
			break;
		}
	}
}
*/

//190p.31��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int  i, day, rd;
	double inx = 100;
	cout << "���� ���� ���� 100mg�Դϴ�.\n";
	cout << "�� ��° �Ǵ� ���� ���� �ּ� �ܷ��� ���ұ��? :";
	cin >> day;
	rd = day / 14;
	for (i = 1; i <= rd + 1; i++) {
		inx = inx / 2;
		cout << i * 14 << "�� ������ ���� �ּ� �ܷ���" << inx << "mg �̻�\n";
	}
	cout << "�׷��Ƿ� " << day << "�� °���� " << inx << "mg �̻� �����ֽ��ϴ�.";
}
*/
//190p. 32��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	
	cout << "1. ���� �ѷ� ���ϱ�\n";
	cout << "2. ���� ���� ���ϱ�\n";
	cout << "3. ���� ���� ���ϱ�\n";
	cout << "4. �׸��α�\n";
	
	while (true) {
		cout << ">> ���ϴ� ������?";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << ">> ��������?";
			cin >> b;
			cout << ">> ��������" << b << "�� ���� �ѷ���" << 3.14 * b * 2 << endl;
			break;
		}
		case 2:
		{
			cout << ">> ��������?";
			cin >> b;
			
			cout << ">> ��������" << b << "�� ���� ���̴�" << 3.14 * b * b << endl;
			break;
		}
		case 3:
		{
			cout << ">> ��������?";
			cin >> b;
			cout << ">> ��������" << b << "�� ���� ���̴�" << (4 / 3 * 3.14 * b * b * b) << endl;
			break;
		}
		case 4:
		{
			cout << "���α׷��� �����ϴ�.\n";
			break;
		}
		default:
			cout << "�߸��Է��ϼ̽��ϴ�.\n";
			break;
		}
		if (a == 4) {
			break;
		}
	}
}
*/