//463P. 5��
/*
#include <iostream>
using namespace std;
struct student {
	int kor, eng, mat, tot;
	double ave;
	char hak;
};
int total(student stu[5], int i);
double ave(student stu[5], int i);
char hakjum(student stu[5], int i);

void main()
{
	struct student stu[5];
	int i;

	for (i = 0; i < 5; i++) {
		cout << i + 1 << "��° ���� ���� ���� : ";
		cin >> stu[i].kor >> stu[i].eng >> stu[i].mat;
		total(stu, i);
		ave(stu, i);
		hakjum(stu, i);
	}
	cout <<"��ȣ\t"  << "����\t" << "����\t"<< "����\t" <<  "����\t" <<  "���\t" << "����\t" << endl;
	for (i = 0; i < 5; i++) {
		cout <<i+1<<"\t"<< stu[i].kor <<"\t"<< stu[i].eng <<"\t"<< stu[i].mat << "\t"<<stu[i].tot<<"\t"<<stu[i].ave<<"\t"<<stu[i].hak<<endl;
	}
}
int total(student stu[5], int i)
{
	stu[i].tot = stu[i].kor + stu[i].eng + stu[i].mat;
	return stu[i].tot;
}
double ave(student stu[5], int i)
{
	stu[i].ave = stu[i].tot / 3.0;
	return stu[i].ave;
}
char hakjum(student stu[5], int i)
{
	int a = stu[i].ave / 10;
	switch (a) {
	case 10: stu[i].hak = 'A'; break;
	case 9 : stu[i].hak = 'A'; break;
	case 8: stu[i].hak = 'B'; break;
	case 7: stu[i].hak = 'C'; break;
	case 6: stu[i].hak = 'D'; break;
	default: stu[i].hak = 'F'; break;

	}
	return stu[i].hak;
}
*/
//464p. 7��
/*
#include <iostream>
using namespace std;
#define SIZE 100

struct person {
	char name[20];
	char gender[20];
	int age;
};
void input(struct person user[], int i)
{
	cout << "�̸���";
	cin >> user[i].name;
	cout << "������<�� �Ǵ� ��";
	cin >> user[i].gender;
	cout << "���̴�?";
	cin >> user[i].age;
	
}
void print(struct person* user, int i)
{
	cout << "�̸�\t����\t����\n";
	cout << "==========================\n";
	for (int a = 0; a < i; a++)
		cout << user[a].name <<"\t"<< user[a].gender << "\t"<<user[a].age << endl;
	cout << "==========================\n";
}

void main()
{
	struct person user[SIZE];
	int a, j, i = 0;

	input(user, i);
	cout << "��� �Է��Ϸ��� 1, �׸��Ϸ��� 0�� �Է��ϼ���.";
	cin >> a;
	i++;
	while (1) {
		if (a == 1) {
			input(user, i);
			cout << "��� �Է��Ϸ��� 1, �׸��Ϸ��� 0�� �Է��ϼ���.";
			cin >> a;
			i++;
		}
		else {
			print(user, i);
			break;
		}
	}
}
*/
//465p. 8��
/*
#include <iostream>
using namespace std;

struct person {
	char epnb[20];
	char name[20];
	int chil, pay, chpay, totpay;
};

void main()
{
	struct person user[3];
	int max = 0;
	int max1 = 0;
	for (int i = 0; i < 3; i++) {
		cout<<">> �����ȣ? :";
		cin >> user[i].epnb;
		cout << ">> �̸�?  :";
		cin >> user[i].name;
		cout << ">> �ڳ��?  :";
		cin >> user[i].chil;
		cout << "<< �⺻��?  :";
		cin >> user[i].pay;
		user[i].chpay = user[i].chil * 100000;
		user[i].totpay = user[i].pay + user[i].chpay;
		if (user[i].totpay > max) {
			max = user[i].totpay;
			max1 = i;
		}
	}
	cout << "�����ȣ\t�̸�\t�⺻��\t�ڳ��\t�ڳ����\t�޿�\n";
	cout << "-------------------------------------------------------------------\n";
	for (int i = 0; i < 3; i++) {
		cout << user[i].epnb << "\t\t" << user[i].name << "\t" << user[i].pay << "\t" << user[i].chil << "\t" << user[i].chpay << "\t\t" << user[i].totpay << endl;
	}
	cout << "\n�ְ� �޿��� : " << user[max1].name << "\t" << user[max1].totpay<<"��\n";
}
*/
