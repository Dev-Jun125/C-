#include <iostream>
using namespace std;
struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};
int main(void)
{
	struct namecard man[4];
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << "�� ° ����� �Է��մϴ�.\n";
		cout << "�̸��� �Է��ϼ���. =>";
		cin >> man[i].name;
		cout << "������  �Է��ϼ���. =>";
		cin >> man[i].job;
		cout << "����ó�� �Է��ϼ���. =>";
		cin >> man[i].tel;
		cout << "�̸����� �Է��ϼ���. =>";
		cin >> man[i].email;
	}
	cout << "\n�Է¹��� �����͸� ����մϴ�.";
	cout << "\n�̸� \t����\t����ó\t�̸���\n";
	for(int i =0;i<4;i++){
		cout << "\n" << man[i].name << "\t" << man[i].job << "\t" << man[i].tel << "\t" << man[i].email << endl;
	}
}