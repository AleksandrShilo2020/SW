#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e, f;
	cout << " ������� �����, ������ � ������ ���������: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << " ������� �����, ������ � ������ ���������������: " << endl;
	cin >> d;
	cin >> e;
	cin >> f;
	if ((a >= f && b >= e) || (a >= f && b >= d) || (a >= d && b >= e) || (b >= f && a >= e) || (b >= f && a >= d) || (b >= d && a >= e))
	{
		cout << " ����� " << endl;
	}
	else
	{
		cout << " ������ " << endl;
	}
	return 0;
}