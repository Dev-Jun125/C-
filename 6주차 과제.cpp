//311p. 4��
/*
#include <iostream>
using namespace std;
int main(void)
{
	double rain[5] = {50.6, 41.9, 28.6,30.3, 37.8};
	int year[5] = { 1995, 1996, 1997, 1998, 1999 };
	double monra[12] = { 7.8, 7.2, 3.8, 2.8, 1.9, 0.6, 1.2, 0.3, 0.9, 1.7, 3.6, 6.1 };
	int i, j;
	double sum = 0;

	cout << "  ��\t���췮<inches>\n";
	cout << "========================\n";
	for (i = 0; i < 5; i++) {
		cout << year[i] << "��\t";
		cout << rain[i]<<endl;
		sum = sum + rain[i];
	}
	cout << endl;
	cout << "5�� ��� ���췮�� " << sum / 5.0 << "inches.\n\n";
	cout << "\t\t�� ��� ���췮\n";
	cout << "=================================================================================================\n";
	for (j = 0; j < 12; j++) {
		cout << j + 1 << "��\t";
	}
	cout << endl;
	for (j = 0; j < 12; j++) {
		cout << monra[j] << "\t";
	}

}
*/
//312p 7��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int answer[10] = { 1, 3, 3, 4, 2, 2, 3, 1, 4, 1};
	int stan[10][10] = { {1,3,3,4,2,2,3,1,4,3},{1,4,3,2,2,2,3,1,4,1},{1, 3, 3, 4, 1, 2, 3, 2, 4, 1},{1, 3, 1, 3, 2, 1, 3, 1, 4, 1},{1, 1, 2, 4, 2, 2, 3, 1, 2, 1},
		{1, 3, 3, 4, 2, 2, 3, 3, 4, 1},{1, 3, 3, 4, 2, 4, 3, 1, 4, 1},{1, 3, 3, 4, 1, 2, 3, 1, 4, 1},{1, 3, 3, 4, 2, 3, 3, 1, 4, 1},{1, 3, 3, 4, 2, 2, 3, 1, 4,1}};
	int rank[10][3];
	int temp[3];
	int i, j, sum=0;

	cout << "\t\t\t\t���׺� ä�� ���\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
	cout << "����\t";
	for (i = 0; i < 10; i++) {
		cout << i+1 << "\t";
	}
	cout << "����\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
	for (i = 0; i < 10; i++) {
		cout << i + 1 << "��\t";
		for (j = 0; j < 10; j++) {
			if (stan[i][j] == answer[j]) {
				sum = sum + 1;
				cout << "O\t";
			}
			else{
				cout << "X\t";
			}
			
		}
		rank[i][0] = i + 1;
		rank[i][1] = sum;
		rank[i][2] = 1;
		cout << sum<<"��\n";
		sum = 0;
	}
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (rank[i][1] > rank[j][1]) {
				rank[j][2]++;
			}
		}
	}
	cout << "\n\t���� �� ����\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
	cout << "����\t��ȣ\t����\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if(rank[j][2]==i)
				cout << rank[j][2] << "��\t" << rank[j][0] << "��\t" << rank[j][1] << "��\n";

		}
	}
}
*/
//313p. 8��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	int a[8][8];
	int i, j,sum =0;
	srand(time(NULL));
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
		{
			a[i][j] = rand() % 150 + 1;
		}
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
		{
			cout << a[i][j] << "\t";
			sum = sum + a[i][j];
		}
		cout << "\n";
	}
	cout << sum << endl;
	sum = 0;
	cout << "\n�ܰ� ��Ҹ� ����� �迭\n";
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (i == 0 || i == 7||j==0||j==7) {
				cout << a[i][j] << "\t";
				sum = sum + a[i][j];
			}
			else {
				cout << "\t";
			}
		}
		cout << endl;
	}
	cout << "\n�ܰ���� ����" << sum<<endl;
}
*/
//317p. 16��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	int a[5][5];
	int i, j, sum = 0;
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 100 + 1;
			if (i == 4 || j == 4)
				a[i][j] = 0;
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			a[i][4] = a[i][4] + a[i][j];
			a[4][j] = a[4][j] + a[i][j];
			a[4][4] = a[4][4] + a[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}
*/
//317p. 17��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	int a[4][3];
	int b[4][3];
	int c[4][3];
	int i, j, sum = 0;
	srand(time(NULL));
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 100 + 1;
			}
	}
	cout << "A\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			b[i][j] = rand() % 100 + 1;
		}
	}
	cout << "B\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	cout << "A+B\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			c[i][j] = 0;
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	cout << "A-B\n";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
}
*/
