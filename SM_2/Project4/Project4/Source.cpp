#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int** arr, n, i, j;
    cout << "������� ������ �������: ";
    cin >> n;
    arr = new int* [n];
    for (i = 0; i < n; i++)
        arr[i] = new int[n];
    cout << "������� �������� �������: " << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    cout << "���������� �������: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "���������� �������, ����������������� ������������ ������� ���������: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }
    cout << "���������� �������, ����������������� ������������ �������� ���������: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[n - 1 - j][n - 1 - i] << " ";
        cout << endl;
    }
    return 0;
}