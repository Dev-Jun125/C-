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
		cout << i + 1 << "번 째 사람을 입력합니다.\n";
		cout << "이름을 입력하세요. =>";
		cin >> man[i].name;
		cout << "직업을  입력하세요. =>";
		cin >> man[i].job;
		cout << "연락처를 입력하세요. =>";
		cin >> man[i].tel;
		cout << "이메일을 입력하세요. =>";
		cin >> man[i].email;
	}
	cout << "\n입력받은 데이터를 출력합니다.";
	cout << "\n이름 \t직업\t연락처\t이메일\n";
	for(int i =0;i<4;i++){
		cout << "\n" << man[i].name << "\t" << man[i].job << "\t" << man[i].tel << "\t" << man[i].email << endl;
	}
}