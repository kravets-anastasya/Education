// ������ ��������� ���������
/*������������ ������ ������� ����� �� ��� (12 �������).
����� ������������ ������ �������� (��������, 3 � 6 � �����
����� 3-� � 6-� �������). ���������� ���������� �����,
� ������� ������� ���� ����������� � �����, � �������
������� ���� ���������� � ������ ���������� ���������.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	const short SIZE = 12;
	size_t namber[SIZE];
	size_t start_range;
	size_t end_range;
	
	cout << "������� ������� ����� �� " << endl;
	for (size_t i = 0; i < SIZE; i++) {
		cout << i + 1 << " �����: ";
		cin >> namber[i];
	}
	do {
		cout << "������� ������ ���������: ";
		cin >> start_range;
		cout << "������� ����� ���������: ";
		cin >> end_range;
		if (start_range < end_range) break;
		cout << "�� ����� �������. ���������� �����." << endl;
		cout << "��������� ����� ������ ���� ������ ��� ��������." << endl;
		system("pause");
		system("cls");
	} while (true);

	int max = namber[start_range];
	int min = namber[start_range];
	
	for (size_t i = start_range - 1; i < end_range; i++) {
		if (max < namber[i]) {
			max = namber[i];
		}
		if (min > namber[i]) {
			min = namber[i];
		}
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;


	return 0;
}