//176p. 2번if문
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "두 수를 입력하시오. :";
	cin >> a >> b;
	if (b == 0)
		cout << "0으로 나눌 수 없습니다.";
	else	
	cout << a <<"/" <<b<<"의 몫은"  << a / b << "입니다." << endl;
}
*/
//177p 6번
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
	else if(f > 79.5) {
		cout << "학점 = B\n";
		cout << "good";
	}
	else if(f > 69.5) {
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
// 스위치 케이스 연습문제
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	char c;
	cout << "계산할 숫자를 입력하세요. :";
	cin >> a >> b;
	cout << "+, -, *, / 중 선택하세요";
	cin >> c;
	switch (c) {
	case '+': cout << a << "+" << b << "=" << a + b << "입니다." << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << "입니다." << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << "입니다." << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << "입니다." << endl; break;

	}
}
*/
//
/*
#include <iostream>
using namespace std;
int main(void)
{
	int total = 0;
	for (int i = 1; i <= 100; i = i + 2) {
		//cout << "i=" << i << endl;
		total = total + i;
		//cout << "total =" << total << endl;
	}
	cout << total;
}
*/
/*
#include <iostream>
using namespace std;
int main(void)
{
	int ;
	cout << "월급을 입력하세요. :";
	cin >> time;
	if (time>30)

}
*/