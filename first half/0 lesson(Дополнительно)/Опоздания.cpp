#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    while (true) {
        int string, fine, salary, menu;
        cout << "1 - ������������ ������ �������� ����� ���� � ���������� ���������,"
            "\n\t���������, ������� ����� ���� ��� ���� ��������" << endl;
        cout << "2 - ������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������. "
            "\n\t���������, ������� ��� ���� ����� ��������" << endl;
        cout << "3 - ������������ ������ ���������� ����� ���� � ���������� ���������, ����������, "
            "\n\t������� ����� �������� ���� � �������� �� ������." << endl;
        cin >> menu;
        switch (menu) {
        case 1: {
            cout << "�� � 1 ���� ��� ����:" << endl;
            cout << "�������� ����� ���� - 1300$, ���������� ��������� - 9" << endl;
            cin >> salary >> fine;
            string = ((salary - ((fine / 3) * 20)) / 50) * 100;
            cout << "����� �������� " << string << " ����� ����" << endl;
        }
              break;
        case 2: {
            cout << "�� � 2 ���� ��� ����:" << endl;
            cout << "���������� ����� ����, ���������� ����� - 3600, �������� ����� �������� - 1300$" << endl;
            cin >> string >> salary;
            string = (string / 100) * 50;
            if (salary > string) {
                salary = ((salary - string) / 50) * 100;
                cout << "���� ���� �������� " << salary << " ����� ���� ���� �������� ������� ��" << endl;
                cout << "���� �������� ����� 2 ����, � 3 ��� ������ � -$ � ��������" << endl;
            }
            else
                cout << "���� ����� �� ����� )" << endl;
        }
              break;
        case 3: {
            cout << "�� � 3 ���� ��� ����:" << endl;
            cout << "���������� ����� ���� - 4600, ���������� ��������� - 3" << endl;
            cin >> string >> fine;
            //
            salary = ((string / 100) * 50) - ((fine / 3) * 20);
            (salary >= 0) ? cout << salary << "$ ���� ���������\n" : cout << salary << "$ ���� ����� :)" << endl;
        }
              break;
        default:
            cout << "Think what you write !!!" << endl;

        }

        return 0;
    }

}