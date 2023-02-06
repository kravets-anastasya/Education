//������ ��������� ���������
/*�������� �������, ������� �������� ��������� �� ������������ ������ � ��� ������. �������
������ ������� �� ������� ����� �� ����� � �������
��������� �� ����� ������������ ������.*/

#include <iostream>
#include "Working with array creation.h"
#include "Functions in an array.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int size{};
	int menu_selection{};
	int namber{};
	cout << "������� ���������� ���������: ";
	cin >> size;
	int* array = new int[size];

	cout << "��������: 1- ������� �������, 2- ��������� �����.\n";
	cin >> menu_selection;
	if (menu_selection == 2) {
		NumberGenerator(array, size);
	}
	else if (menu_selection == 1) {
		ManualInputToArray(array, size);
	}
	else {
		cout << "�� ����� �������� �����!";
		return -1;
	}
	Conclusion(array, size);
	cout << "������� ����� ����� �������:";
	cin >> namber;
	
	int size2{};
	int* new_arr = RemoveSomeNumbers(array, size, namber, size2);
	Conclusion(new_arr, size2);

	return 0;
}