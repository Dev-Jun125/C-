//176p. 2��if��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "�� ���� �Է��Ͻÿ�. :";
	cin >> a >> b;
	if (b == 0)
		cout << "0���� ���� �� �����ϴ�.";
	else	
	cout << a <<"/" <<b<<"�� ����"  << a / b << "�Դϴ�." << endl;
}
*/
//177p 6��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d;
	double e, f;
	cout << "�߰���� ������ �Է��ϼ���. :";
	cin >> a;
	cout << "�⸻��� ������ �Է��ϼ���. :";
	cin >> b;
	cout << "����Ʈ ������ �Է��ϼ���. :";
	cin >> c;
	cout << "�⼮ ������ �Է��ϼ���. :";
	cin >> d;
	e = (a + b) / 2.0;
	f = (0.6 * e) + (0.2 * c) + (0.2 * d);
	cout << "���� = " << f << endl;
	if (f > 89.5) {
		cout << "���� = A\n";
		cout << "Excellent";
	}
	else if(f > 79.5) {
		cout << "���� = B\n";
		cout << "good";
	}
	else if(f > 69.5) {
	cout << "���� = C\n";
	cout << "fair";
	}
	else if (f > 59.5) {
		cout << "���� = D\n";
		cout << "Poor";
	}
	else {
		cout << "���� = F\n";
		cout << "Failure";
	}


}
*/
// ����ġ ���̽� ��������
/*
#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	char c;
	cout << "����� ���ڸ� �Է��ϼ���. :";
	cin >> a >> b;
	cout << "+, -, *, / �� �����ϼ���";
	cin >> c;
	switch (c) {
	case '+': cout << a << "+" << b << "=" << a + b << "�Դϴ�." << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << "�Դϴ�." << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << "�Դϴ�." << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << "�Դϴ�." << endl; break;

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
	cout << "������ �Է��ϼ���. :";
	cin >> time;
	if (time>30)

}
*/