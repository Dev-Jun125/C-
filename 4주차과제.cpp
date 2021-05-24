//183p. 16번
/*
#include <iostream>
using namespace std;
int main(void)
{
	double tot = 0;
	double p;
	int menu, x;
	char yn;
	cout << "맥도날드 메뉴판\n";
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
		cout << "주문할 수량을 입력하시오.:";
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
		cout << "추가로 주문 하시겠습니까? y, n-->";
		cin >> yn;
		if (yn == 'n') {
			cout << "Please pay [" << tot * 1.055 << "$]"; 
			break;
		}
			
		else if (yn == 'y') {

		}
		else {
			cout << "잘못입력하셨습니다.";
			break;
		}
	}
}
*/
//183p. 17번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int f, x, p = 0, tot = 0;
	char yn;
	while (true) {
		cout << "당신은 어떤 과일을 좋아하십니까?\n";
		cout << "1.사과\t2.바나나\t3.오렌지\n";
		cout << "원하는 과일의 번호를 입력하시오. ->";
		cin >> f;
		cout << "당신이 구입할 과일의 개수를 입력하시오. ->";
		cin >> x;
		
		switch (f) {
		case 1: p = 500; break;
		case 2: p = 800; break;
		case 3: p = 1000; break;
		}
		tot = tot + p * x;
		cout << "-추가- 계속 다른 과일의 구입을 원하시면 'y', 아니면 'n' ->";
		cin >> yn;
		if (yn == 'n') {
			cout << "당신이 지불할 가격은 " << tot << "원 입니다.";
			break;
		}

		else if (yn == 'y') {

		}
		else {
			cout << "잘못입력하셨습니다.";
			break;
		}
	}
}
*/
// 184p.18번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d, tot = 0;
	char ageyn, plusyn;
	while (true) {
		cout << "목적지 번호를 입력하시오. -->";
		cin >> a;
		switch(a) {
		case 1: b = 25000; break;
		case 2: b = 18000; break;
		case 3: b = 12000; break;
		case 4: b = 20000; break;
		}
		cout << "구매하고자 하는 표의 개수를 입력하시오. -->";
		cin >> c;
		cout << "어른이면 y 학생이면 n -->";
		cin >> ageyn;
		if (ageyn == 'y') {
			cout << "성인이므로 할인하지 않습니다.\n";
		}
		else if (ageyn == 'n') {
			b = b * 0.5;
		}
		else {
			cout << "잘못입력하셨습니다.\n";
			break;
		}
		tot = tot + b * c;
		cout << "더 구매하시겠습니까? y, n-->";
		cin >> plusyn;
		if (plusyn == 'n') {
			cout << "버스 요금은 <" << tot << "원> 입니다.";
			break;
		}

		else if (plusyn == 'y') {

		}
		else {
			cout << "잘못입력하셨습니다.\n";
			break;
		}
	}
}
*/
//184p. 19번
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
//185p.20번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i;
	cout << "정상가격 \t 30세일가격\n";
	for (i = 10000; i <= 20000; i = i + 1000) {
		cout << i << "원\t\t" << i*0.7 << "원" << endl;
	}
}
*/
//185p.21번
/*
#include<iostream>
using namespace std;
int main(void)
{
	int  a, b, i;
	for (i = 1; i <= 5; i++)
	{
		cout << "막대 #" << i << "의 높이:";
		cin >> a;
		if (a <= 50){
			for (b = 1; b <= a; b++)
			{
				cout << "*";
			}
		}
		else {
			cout << "잘못입력하셨습니다.";
		}
		
		cout << "\n";
	}
}
*/
//186p.22번
/*
#include<iostream>
using namespace std;
int main(void)
{
	int i;
	cout << "가격\t30%\t50%\t70%\n";
	for (i = 10000; i <= 50000;i += 5000)
	{		
		cout << i <<"\t"<< i *0.7<<"\t" << i * 0.5<< "\t"<< i * 0.3 <<"\n";
	}
}
*/
//186p. 23번
/*
#include<iostream>
using namespace std;
int main(void)
{
	int a, i, sum = 0;
	cout << "정수를 입력하시오.:";
	cin >> a;
	cout << a << "\t1부터" << a << "까지의 합\n";
	for (i = 1; i <= a; i++)
	{
		sum = sum + i;
		cout << i<<"\t" << sum << endl;
	}
}
*/
//186p.24번
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	int i, b;
	cout << "원금 :";
	cin >> b;
	cout << "연도\t원리금\n";
	for (i = 0; i < 10; i++) {
		
		cout << i+1 << "\t" << double (b * pow((1.07), i)) <<"\n";
	}
}
*/
//187p.25번
/*
#include<iostream>
using namespace std;
int main(void)
{
	int start, day = 0, date;
	cout << "시작요일 입력 :";
	cin >> start;
	cout << "일\t월\t화\t수\t목\t금\t토\n";
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
//188p.26번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j;
	cout << "\t구구단\n";

	for (i = 1; i <= 9; i=i+3) {
		cout << i << "단\t" << i + 1 << "단\t" << i + 2 << "단\n";
		for (j = 1; j <=9; j++) {
			cout << i << "*" << j << "=" << i * j << "\t" << i + 1 << "*" << j << "=" << (i + 1) * j << "\t" << i + 2 << "*" << j << "=" << (i + 2) * j << "\n";
		}
		cout << "\n";
	}
}
*/
//188p.27번
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
//189p.28번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j, k,sum;
	cout << "조건을 만족하는 경우는 다음과 같습니다.\n";

	for(i=0;i<=5;i++)
		for(j=0;j<=5;j++)
			for (k = 0; k <= 5; k++) {
				sum = 2 * i + 3 * j + 5 * k;
				if (sum == 24) {
					cout << "2g 추" << i << "개 3g 추" << j << "개 5g 추" << k << "개\n";
				}
			}
}
*/
//189p.30번
/*
#include <iostream>
using namespace std;
int main(void)
{
	double l, km, yn;
	double kml;
	while (true)
	{
		cout << "연료의 양을 입력하시오.<ㅣ> :";
		cin >> l;
		cout << "주행거리를 입력하시오. :";
		cin >> km;
		kml = 1.0*km / l;
		cout << "연비는 " << kml << "km/l입니다..";
		cout << "다시 계산하시겠습니까?\n";
		cin >> yn;
		if (yn == 1) {
			continue;
		}
		else if (yn == 0) {
			break;
		}
		else {
			cout << "잘못입력하셨니다.";
			break;
		}
	}
}
*/

//190p.31번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int  i, day, rd;
	double inx = 100;
	cout << "현재 인의 양은 100mg입니다.\n";
	cout << "몇 일째 되는 날의 인의 최소 잔량을 구할까요? :";
	cin >> day;
	rd = day / 14;
	for (i = 1; i <= rd + 1; i++) {
		inx = inx / 2;
		cout << i * 14 << "일 까지의 인의 최소 잔량은" << inx << "mg 이상\n";
	}
	cout << "그러므로 " << day << "일 째에는 " << inx << "mg 이상 남아있습니다.";
}
*/
//190p. 32번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	
	cout << "1. 원의 둘레 구하기\n";
	cout << "2. 원의 넓이 구하기\n";
	cout << "3. 구의 부피 구하기\n";
	cout << "4. 그만두기\n";
	
	while (true) {
		cout << ">> 원하는 내용은?";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << ">> 반지름은?";
			cin >> b;
			cout << ">> 반지름이" << b << "인 원의 둘레는" << 3.14 * b * 2 << endl;
			break;
		}
		case 2:
		{
			cout << ">> 반지름은?";
			cin >> b;
			
			cout << ">> 반지름이" << b << "인 원의 넓이는" << 3.14 * b * b << endl;
			break;
		}
		case 3:
		{
			cout << ">> 반지름은?";
			cin >> b;
			cout << ">> 반지름이" << b << "인 원의 넓이는" << (4 / 3 * 3.14 * b * b * b) << endl;
			break;
		}
		case 4:
		{
			cout << "프로그램을 끝냅니다.\n";
			break;
		}
		default:
			cout << "잘못입력하셨습니다.\n";
			break;
		}
		if (a == 4) {
			break;
		}
	}
}
*/