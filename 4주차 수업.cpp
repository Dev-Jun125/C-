//188p.26��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j;
	cout << "\t������\n";

	for (i = 1; i <= 9; i=i+3) {
		cout << i << "��\t" << i + 1 << "��\t" << i + 2 << "��\n";
		for (j = 1; j <=9; j++) {
			cout << i << "*" << j << "=" << i * j << "\t" << i + 1 << "*" << j << "=" << (i + 1) * j << "\t" << i + 2 << "*" << j << "=" << (i + 2) * j << "\n";
		}
		cout << "\n";
	}
}
*/
//189p.28��
/*
#include <iostream>
using namespace std;
int main(void)
{
	int i, j, k,sum;
	cout << "������ �����ϴ� ���� ������ �����ϴ�.\n";
	
	for(i=0;i<=5;i++)
		for(j=0;j<=5;j++)
			for (k = 0; k <= 5; k++) {
				sum = 2 * i + 3 * j + 5 * k;
				if (sum == 24) {
					cout << "2g ��" << i << "�� 3g ��" << j << "�� 5g ��" << k << "��\n";
				}
			}
}
*/
//189p.30��
/*
#include <iostream>
using namespace std;
int main(void)
{
	double l, km, yn;
	double kml;
	while (true)
	{
		cout << "������ ���� �Է��Ͻÿ�.<��> :";
		cin >> l;
		cout << "����Ÿ��� �Է��Ͻÿ�. :";
		cin >> km;
		kml = 1.0*km / l;
		cout << "����� " << kml << "km/l�Դϴ�..";
		cout << "�ٽ� ����Ͻðڽ��ϱ�?\n";
		cin >> yn;
		if (yn == 1) {
			continue;
		}
		else if (yn == 0) {
			break;
		}
		else {
			cout << "�߸��Է��ϼ̴ϴ�.";
			break;
		}
	}
}
*/
