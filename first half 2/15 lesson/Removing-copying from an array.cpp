// ������ ��������� ���������
/*�������� ������� �� ��������(�����������) �� ������� ������ ���������.
�������� �������� ��������� ���������(����������) ��������� �������� �������������.
���������(����������) �������� ������ ������������� �����, ��� ��������.*/

#include <iostream>
#include "Array_functions_split.h"
#include "Working with array creation.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int size{};
	int range_of{};
	int range_to{};
	int menu{};

	cout << "������� ���������� ���������: ";
	cin >> size;
	int* array = new int[size];

	cout << "��������: 1- ������� �������, 2- ��������� �����.\n";
	cin >> menu;
	if (menu == 2) {
		NumberGenerator(array, size);
	}
	else if (menu == 1) {
		ManualInputToArray(array, size);
	}
	else {
		cout << "�� ����� �������� �����!";
		return -1;
	}
	PrintArray(array, size);

	cout << "������� ������ ��:";
	cin >> range_of;
	cout << "������� ������ ��:";
	cin >> range_to;

	cout << "�������� ��� ������ ������� � ���� ���������� (������������): \n";
	cout << "1. �������. \n";
	cout << "2. ����������. \n";
	cin >> menu;

	system("cls");
	system("color 70");
	cout << "�������� ������: ";
	PrintArray(array, size);
	cout << "\n�������� �� " << range_of << " �� " << range_to << endl;
	cout << "\n������������ ������: ";
	if (menu == 1) {
		int* new_arr = RemovalInRange(array, size, range_of, range_to);
		PrintArray(new_arr, size);
	}
	else if (menu == 2) {
		int* new_arr = CopyFromArray(array, size, range_of, range_to);
		PrintArray(new_arr, size);
	}
	else {
		cout << "�� ����� �������� �����! \n";
		return -1;
	}

	return 0;
}
