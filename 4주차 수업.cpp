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
