/*
#include <iostream>
using namespace std;
void main()
{
    int a, b;
    cout << "���� �߱ٺ� �Է��Ͻÿ�. :";
    cin >> a;
    cout << "�߱��� ��¥�� �Է��ϼ���. :";
    cin >> b;
    cout << "�Ѵ� �߱ٺ��" << a * b << "�Դϴ�.";
}
*/
/*
#include <iostream>
#include <cstring>
using namespace std;
void main()
{
    char password[11];
    cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���. :" << endl;
    while (true) {
        cout << "��ȣ>>";
        cin >> password;
        if (strcmp(password, "C++") == 0) {
            cout << "���α׷��� ���������մϴ�." << endl;
            break;
        }
        else
            cout << "��ȣ�� Ʋ���ϴ�~" << endl;
    }


}
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "�� �θ� ������";
    cout << "(��Ʈ ù ���ڴ�" << elvis[0] << ")?";

    getline(cin, singer);
    if (singer == elvis)
        cout << "�¾ҽ��ϴ�.";
    else
        cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

void main()
{
    string name;
    int year;
    double GPA, score;

    cout << "�̸���?";
    getline(cin, name);
    cout << "�� �г�?";
    cin >> year;
    cout << year << "�г� ������?";
    cin >> GPA;

    score = (GPA * 100) / 4.5;

    cout << name << year << GPA << score;
}
*/
/*
#include <iostream>
using namespace std;
void main()
{
    int win, lose;
    float winper;

    cout << "�¼��� �Է��ϼ���.";
    cin >> win;
    cout << "�������� �Է��ϼ���.";
    cin >> lose;
    winper = win / (win + lose);

    cout << "�·���" << winper << "�Դϴ�.";
}
*/
