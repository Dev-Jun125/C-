//404p.4��
/*
#include <iostream>
using namespace std;

void printba(int p[10])
{
	for (int i = 0; i < 10; i++) {
		cout << *(p + i);
	}
	cout << "\n";
}
void sort(int p[10])
{
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (*(p + i) > *(p + j)) {
				
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}
void change(int p[10])
{
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		temp = *(p + i);
		*(p + i) = *(p + i + 5);
		*(p + i + 5) = temp;
	}
}
int main(void)
{
	int a[10] = { 0,2,1,5,4,3,9,7,8,6 };
	int sel;
	while (1) {
		cout << "1. ����   2. �����ٲٱ�   3. ����\n";
		cout << "���ϴ� ����� �����Ͻÿ�. :\n";
		cin >> sel;
		switch (sel) {
		case 1: {
			printba(a);
			sort(a);
			printba(a);
			break;
		}
		case 2: {
			printba(a);
			change(a);
			printba(a);
			break;
		}
		case 3: {
			exit(1);
		}
		}
	}
}
*/

//404p.5��
/*
#include <iostream>
using namespace std;
void print_arr(int* arr)
{
	cout << "�ο��� : ";
	for (int i = 0; i < 4; i++) {
		cout << *(arr + i) << "  ";
	}
	cout << "\n\n";
}
void percentage(int* arr)
{
	double tot = 0;
	for (int i = 0; i < 4; i++) {
		tot = tot + *(arr + i);
	}
	cout << "����� : ";
	for (int i = 0; i < 4; i++) {
		cout << int (*(arr + i) / tot * 100) <<"  ";
	}
}
int main(void)
{
	int count[] = { 42, 37, 83, 33 };
	print_arr(count);
	percentage(count);
}
*/
//406p. 8��
/*
#include <iostream>
using namespace std;
void sort(int p[10])
{
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (*(p + i) < *(p + j)) {
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}
void printtop(int p[10], int n)
{
	for (int i = 0; i < n; i++) {
		cout << *(p + i)<< "\t";
	}
}
int main(void)
{
	int sales[] = { 203, 105,302,200,289,175,130,120,267,312 };
	int a;
	sort(sales);
	cout << "���� �� ���� �Ǹŷ��� �˰� �ͳ���? :";
	cin >> a;
	printtop(sales, a);	
}
*/
//406p. 9��
/*
#include <iostream>
using namespace std;
void index_of_max(int arr[])
{
	int top = 0;
	int topa = 0;
	for (int i = 0; i < 10; i++) {
		if (top < *(arr + i)) {
			top = *(arr + i);
			topa = i;
		}
	}
	cout << "���� �ְ� ���� : quiz[" << topa << "] = " << top;
}
int main(void)
{
	int quiz[] = { 4,8,9,15,6,13,12,10,9,11 };
	index_of_max(quiz);
}
*/
//407p. 10��
/*
#include <iostream>
using namespace std;
void array_copy(int a[], int b[], int size)
{
	cout << "�� ��° �迭 : ";
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
		cout << b[i] << "  ";
	}
}
int main(void)
{
	int a[20];
	int b[20];
	int c, d=0;
	cout << "2���� �����迭�� �Է����ּ���(�Է��� ��ġ���� -1 �Է�) \n";
	while (1) {

		cout << "ù��° �迭�� " << d+1 << "��° �� : ";
		cin >> c;
		if (c == -1) {
			break;
		}
		else {
			a[d] = c;
			d++;
		}
	}
		
		
	array_copy(a, b, d);
}
*/
//407p.11��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
float mean_f(int *a)
{
	int tot = 0;
	for (int i = 0; i < 10; i++) {
		tot = tot + *(a + i);
	}
	return tot/10.00;
}
void std_dev(int* a,double *dim, int s)
{
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		*(dim + i) = pow(*(a+i) - s,2)/10.0;
		cout << "d[" << i << "] = " << *(dim + i)<<endl;
		ans = ans + *(dim + i);
	}
	cout << "�л� = " << ans<<endl;
	cout << "ǥ������ = " << sqrt(ans) << endl;

}

int main(void)
{
	int a[10];
	double dim[10];
	int i;
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		{
			a[i] = rand() % 100 + 1;
		}
	}
	for (i = 0; i < 10; i++) {
		cout << a[i] << "  ";
	}
	cout << "\n";
	cout << "\n";
	cout <<"��� : "<< mean_f(a)<<endl;
	std_dev(a, dim, mean_f(a));
}
*/
//408p.12��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void frqtest(int*a)
{
	int j = 0;
	for (int i = 0; i < 100; i++) {
		if (*(a + i) > *(a+j)) {
			j = i;
		}
	}
	cout << "0~9 �� ���� ���� ���� ���� "<<j << "�̰�,  " << *(a + j)<<"�� ���Խ��ϴ�.";
}
int main(void)
{
	int a[100] = { 0 };
	
	int i;
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		{
			a[rand() % 10]++;
		}
	}
	
	cout << endl;
	frqtest(a);
}
*/
//409p.13��
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void sumcolrow(int(*a)[5])
{
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			a[i][4] = a[i][4] + a[i][j];
			a[4][j] = a[4][j] + a[i][j];
			a[4][4] = a[4][4] + a[i][j];
		}
	}
}
void print(int (*a)[5],int x,int y)
{
	int i, j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
}
int main(void)
{
	int a[5][5] = { 0 };
	int i, j, sum = 0;
	srand(time(NULL));
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand() % 100 + 1;
		}
	}
	cout << "\n\n";
	print(a, 4, 4);
	sumcolrow(a);
	print(a, 5, 5);
}
*/

