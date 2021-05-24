//최대 최소 찾기
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a[5];
	int max, min;
	int i;
	int maxid=0, minid=0;
	cout << "정수형 데이터를 5개 입력 :\n";

	for (i = 0; i < 5; i++) {
		cout << "a[" << i << "] ->";
		cin >> a[i];
	}
	max = a[0];
	min = a[0];

	for (i = 1; i < 5; i++) {
		if (a[i] > max) {
			max = a[i];
			maxid = i;
		}
	}
	for (i = 1; i < 5; i++) {
		if (a[i] < min) {
			min = a[i];
			minid = i;
		}
	}

	cout <<"최대값 위치 : "<< maxid << "\t최대값 : " << max << endl;
	cout <<"최소값 위치 : "<< minid << "\t최소값 : " << min << endl;

}
*/
//293p. 1번
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, no[5]
}
*/
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a[3][4] = { {10,20,30,40}, {20,40,60,80},{10,30,50,70} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int q[3][4];
	int d[3][4];
	int r, c;
	
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 4; c++) {
			q[r][c] = a[r][c] + b[r][c];
			d[r][c] = a[r][c] - b[r][c];

		}
	}
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 4; c++) {
			cout << " " << q[r][c];
		}
		cout << "\t";
		for (c = 0; c < 4; c++) {			
			cout << " " << d[r][c];
		}
		cout << "\n";
	}

}
*/