// ������ ��������� ���������
/*� ���������� �������, ����������� ���������� �������
� �������� ������������� ���������, ����� ����� ���������,
�������� ������� ������ ���������� �������������.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	const short size = 20;
	int namber[size];
	size_t start_range;
	size_t end_range;
	size_t min_values;
	size_t summ_element = 0;

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
	}while(true);
	
	for (size_t i = 0; i < size; i++) {
		namber[i] = rand() % (end_range - start_range) + start_range;
	}
	cout << endl << "{";
	for (size_t i = 0; i < size; i++) {
		cout << namber[i] << "; ";
	}
	cout << "}" << endl << endl;
	
	cout << "������� �������� ������ ��������, ����� �������� ����� ���������: ";
	cin >> min_values;
	
	cout << endl;
	for (size_t i = 0; i < size; i++){
		if (namber[i] < min_values) {
			summ_element += namber[i];
		}
	}
	cout << "����� ���������: "<< summ_element << endl;

	return 0;
}
