#include <iostream>
#include <string>
using namespace std;
//
//void prn(int* p, int size)
//{
//	for (int i = 0; i < size; i++) {
//		cout << "\t" << (*p + i) << *(p + i) << endl;
//	}//*()�̶� (*)����
//}
//void main()
//{
//	int a[] = { 10,20,30,40,50 };
//	prn(a, 5);
//}

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void main()
{
	namecard std[3];
	std[0] = { "������", "MCSE��������", "418-9876", "freentour@naver.com" };
	std[1] = { "������", "��������", "551-6986", "hk@naver.com" };
	std[2] = { "�赿��", "��ȹA���븮", "318-3961", "ds@naver.com" };
	namecard (*p)[3];
	p = &std;
	cout << std[0].email<<std[1].email<<std->job;
	*(p + 1);
	cout << std[0].email << std->email << std->job;
}