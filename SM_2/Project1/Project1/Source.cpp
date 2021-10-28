#include <iostream>
using namespace std;

int* filling_and_show_arr(int size)
{
	int* arr = new int[size];
	cout << "������������ ������: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	return arr;
}

void position_first_value(int* arr, int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == k)
		{
			cout << "������� ��������� ����� � ������ �������: " << i << endl;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "������� ������ �������: ";
	int n, k;
	cin >> n;
	int* arr = filling_and_show_arr(n);
	cout << endl << "������� �����: ";
	cin >> k;
	position_first_value(arr, n, k);
	delete[] arr;
	return 0;
}