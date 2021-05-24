//176p. 1번
/*
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int kor, eng, math;
	double ave;
	string res;
	cout << "국어, 영어, 수학 점수를 입력하세요. :";
	cin >> kor >> eng >> math;
	ave = (kor + eng + math) / 3.0;
	if (ave >= 60) {
		res = ("합격");
	}
	else {
		res = ("불합격");
	}
	cout << "=======================\n";
	cout << "국어\t영어\t수학\t평균\t결과\n";
	cout << "-----------------------\n";
	cout << kor<<"\t" << eng<<"\t" << math<<"\t" << ave<<"\t"<< res<<endl;
}
*/
//176p. 2번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "두 수를 입력하세요. : ";
	cin >> a >> b;
	if (b == 0) {
		cout << "둘째 수를 0을 입력하여 나눌 수 없습니다.";
	}
	else {
		cout << a << "/" << b << "의 몫은" << a / b << "입니다.";
	}
}
*/
//176p. 3번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int total = 0;
	cout << "1부터 100까지의 합을 구하는 프로그램입니다.\n";
	for (int i = 1; i <= 100; i = i + 2) {
		total = total + i;
	}
	cout << "1 + 3 + ---- + 99 = " << total;
}
*/
//177p.4번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int s,mil,mer, chi;
	int total = 0;
	cout << "성별 <남:1, 여:2> ?";
	cin >> s;
	switch (s) {
	case 1: cout << "군제대 <예:1 아니오:2>";
			cin >> mil;
			if (mil == 1) {
				total = total + 1;
			}
			else if (mil == 2) {
			}
			else {
				cout << " 잘못입력하셨습니다.";
				break;
			}
			cout << "결혼 <예 : 1 아니오 : 2>";
			cin >> mer;
			if (mer == 1) {
				total = total + 1;
			}
			else if (mer == 2) {
			}
			else {
				cout << " 잘못입력하셨습니다.";
				break;
			}
			cout << ">> 총 가산점은 " << total << "입니다.";

			break;

	case 2: cout << "결혼 <예 : 1 아니오 : 2>";
			cin >> mer;
			if (mer == 1) {
				total = total + 1;
			}
			else if (mer == 2) {
				cout << ">> 총 가산점은 " << total << "입니다.";
				break;
			}
			else {
				cout << " 잘못입력하셨습니다.";
				break;
			}
			cout << "자녀수 :";
			cin >> chi;
			total = total + chi;
			cout << ">> 총 가산점은 " << total << "입니다.";
			break;

	default :
		cout << "잘못입력하셨습니다."; break;
	}
}
*/
//177p. 5번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c;
	cout << "a값을 입력하세요. :";
	cin >> a;
	cout << "b값을 입력하세요. :";
	cin >> b;
	c = a - b;
	if (c >= 0) {
		cout << "큰 수를 작은 수로 나눈 몫은 " << a / b << "이고, 나머지값은" << a % b << "입니다.";
	}
	else  {
		cout << "큰 수를 작은 수로 나눈 몫은 " << b / a << "이고, 나머지값은" << b % a << "입니다.";
	}

}
*/
//177p.6번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d;
	double e, f;
	cout << "중간고사 점수를 입력하세요. :";
	cin >> a;
	cout << "기말고사 점수를 입력하세요. :";
	cin >> b;
	cout << "레포트 점수를 입력하세요. :";
	cin >> c;
	cout << "출석 점수를 입력하세요. :";
	cin >> d;
	e = (a + b) / 2.0;
	f = (0.6 * e) + (0.2 * c) + (0.2 * d);
	cout << "성적 = " << f << endl;
	if (f > 89.5) {
		cout << "학점 = A\n";
		cout << "Excellent";
	}
	else if (f > 79.5) {
		cout << "학점 = B\n";
		cout << "good";
	}
	else if (f > 69.5) {
		cout << "학점 = C\n";
		cout << "fair";
	}
	else if (f > 59.5) {
		cout << "학점 = D\n";
		cout << "Poor";
	}
	else {
		cout << "학점 = F\n";
		cout << "Failure";
	}
}
*/
//178p.7번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a;
	cout << "월급을 입력하세요. (단위 : 만원):";
	cin >> a;
	if (a <= 1000) {
		cout << "세금은 " << a * 0.08 << "만원입니다.";
	}
	else if (a <= 4000) {
		cout << "세금은 " << a * 0.17 << "만원입니다.";
	}
	else if (a <= 8000) {
		cout << "세금은 " << a * 0.26 << "만원입니다.";
	}
	else {
		cout << "세금은 " << a * 0.35 << "만원입니다.";
	}
}
*/
//178p.8번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int time, money;
	cout << "일주일동안 일한 시간을 입력하시오. :";
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
	cout << "임금은 " << money << "원 입니다.";
}
*/
//179p. 9번
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int x;
	cout << "x 값을 입력하세요. --->";
	cin >> x;
	if (x <= 0) {
		cout << "함수를 계산한 값은" << pow(x, 3) - (9 * x) + 2 << "입니다.";
	}
	else {
		cout << "함수를 계산한 값은" << x * 7 + 2 << "입니다.";
	}
}
*/
//179p.10번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "a값과 b값을 입력하시오 . :";
	cin >> a >> b;
	if (a != 0) {
		cout << "근은 " << (-b) / a << "입니다.";
	}
	else {
		if (b !=0) {
			cout << "해가 없습니다.";
		}
		else {
			cout << "해가 무수히 많습니다.";
		}
	}
}
*/
//179p.11번
/*
#include <iostream>
using namespace std;
int main(void)
{
	double ph;
	cout << "수소이온의 농도를 입력하시오. -->";
	cin >> ph;
	if (ph < 3.0) {
		cout << "강산성입니다.";
	}
	else if (ph < 7.0) {
		cout << "산성입니다.";
	}
	else if (ph == 7.0) {
		cout << "중성입니다.";
	}
	else if (ph > 7.0) {
		cout << "알칼리성입니다.";.
	}
	else {
		cout << "강알칼리성입니다.";
	}
}
*/
//180p.12번
/*
#include <iostream>
using namespace std;
int main(void)
{
	char a;
	cout << "한 개의 문자를 입력하시오. :";
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
//181p. 13번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int age, time, price;
	char ticket;
	cout << "구매하고자 하는 표가 자유이용권이면 y, 아니면 n을 눌러주세요. -->";
	cin >> ticket;
	cout << "사용자의 나이를 입력하세요 :";
	cin >> age;
	cout << "현재 시간이 주간이면 1을, 야간<5시이후>면 2를 입력하세요.";
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
				cout << "잘못입력하셨습니다.";
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
				cout << "잘못입력하셨습니다.";
				break;
			}
		}
	default :
		cout << "잘못입력하셨습니다."; break;
	}
	cout << "요금은 " << price << "원 입니다.";
}
*/
//181p.14번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int age, kg;
	double cm, per;
	cout << "나이를 입력하시오. :";
	cin >> age;
	cout << "키를 입력하시오. :";
	cin >> cm;
	cout << "체중을 입력하시오. :";
	cin >> kg;
	per = kg / ((cm * 0.01) * (cm * 0.01));
	cout << per<<endl;
	if (20 <= age <= 30) {
		if (per < 18) {
			cout << "저체중";
		}
		else if (18 <= per < 24) {
			cout << "표준체중";
		}
		else if (24 <= per < 30) {
			cout << "과체중";
		}
		else {
			cout << "비만";
		}
	}
	else if (30 < age < 40) {
		if (per < 18.5) {
			cout << "저체중";
		}
		else if (18.5 <= per < 25) {
			cout << "표준체중";
		}
		else if (25 <= per < 30) {
			cout << "과체중";
		}
		else {
			cout << "비만";
		}
	}
}
*/
//182p.15번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int month, a, kw;
	cout << "1.교육용 2.농사용 3.일반용 -->";
	cin >> a;
	cout << "월을 입력하세요. : ";
	cin >> month;
	cout << "전력량을 입력하시오. :";
	cin >> kw;
	switch (a) {
	case 1:
		if (month == 7 || month == 8) {
			cout << "전력요금은 " << 4900 + 73.0 * kw << "원 입니다.";
		}
		else if(4<=month<=6 || month==9){
			cout << "전력요금은 " << 4900 + 49.9 * kw << "원 입니다.";
		}
		else {
			cout << "전력요금은 " << 4900 + 50.5 * kw << "원 입니다.";
		}
		break;
	case 2:
		if (month == 7 || month == 8) {
			cout << "달을 확인해주세요";
		}
		else if (4 <= month <= 6 || month == 9) {
			cout << "전력요금은 " << 1070 + 36.4 * kw << "원 입니다.";
		}
		else {
			cout << "달을 확인해주세요.";
		}
		break;
	case 3:
		if (month == 7 || month == 8) {
			cout << "전력요금은 " << 5320 + 94.2 * kw << "원 입니다.";
		}
		else if (4 <= month <= 6 || month == 9) {
			cout << "전력요금은 " << 5320 + 62.7 * kw << "원 입니다.";
		}
		else {
			cout << "전력요금은 " << 5320 + 66.8 * kw << "원 입니다.";
		}
		break;
	default:
		cout << "잘못입력하셨습니다.";
	}

}
*/