/*
#include <iostream>
using namespace std;
void main()
{
    int a, b;
    cout << "일일 야근비를 입력하시오. :";
    cin >> a;
    cout << "야근한 날짜를 입력하세요. :";
    cin >> b;
    cout << "한달 야근비는" << a * b << "입니다.";
}
*/
/*
#include <iostream>
#include <cstring>
using namespace std;
void main()
{
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요. :" << endl;
    while (true) {
        cout << "암호>>";
        cin >> password;
        if (strcmp(password, "C++") == 0) {
            cout << "프로그램을 정상종료합니다." << endl;
            break;
        }
        else
            cout << "암호가 틀립니다~" << endl;
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

    cout << song + "를 부른 가수는";
    cout << "(힌트 첫 글자는" << elvis[0] << ")?";

    getline(cin, singer);
    if (singer == elvis)
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다." + elvis + "입니다." << endl;
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

    cout << "이름은?";
    getline(cin, name);
    cout << "몇 학년?";
    cin >> year;
    cout << year << "학년 평점은?";
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

    cout << "승수를 입력하세요.";
    cin >> win;
    cout << "패전수를 입력하세요.";
    cin >> lose;
    winper = win / (win + lose);

    cout << "승률은" << winper << "입니다.";
}
*/
