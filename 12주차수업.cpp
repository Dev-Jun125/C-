#include <iostream>
using namespace std;
struct namecard {
	char name[20];
	char job[30];
	char tell[20];
	char email[40];
};

void structPm(namecard temp);
void structinput(namecard& temp);
int main(void)
{
	namecard x, y, z;
	structinput(x);
	structinput(y);
	structinput(z);
	cout << "이름\t직업\t\t연락처\t이메일\n";
	cout << "===================================\n";
	structpm()

}
