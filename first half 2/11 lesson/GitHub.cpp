// ������ ��������� ���������
/*1. ������� ������������ ���� � ���������� ��������������� ���������.
2. ������� ������������ ���� � ��������� �� ���������� ������� �� 2 �����.
3. ������� ���������, ������� ���������� �� ������ ������� �� ����� ������������ ������.
4*. �������� ���������� �� GitHub.*/

#include <iostream>
#include "Array split.h"
#include "Mathematical_functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int const SIZE = 12;
	int const SIZE_2 = 6;
	int array[SIZE];
	int first_half[SIZE_2]; // ������ ���������
	int second_half[SIZE_2]; // ������ ���������

	ManualInputToArray(array, SIZE);
	system("cls");
	
	cout << "���� ���: ";
		Conclusion(array, SIZE);
	cout << "������ ��� ����: ";
	ArraySplit_1_Half(array, first_half, SIZE_2);
	Conclusion(first_half, SIZE_2);
	cout << "������ ��� ����: ";
	ArraySplit_2_Half(array, second_half, SIZE_2);
	Conclusion(second_half, SIZE_2);

	int summa_1_array = Summa(first_half, SIZE_2);
	int summa_2_array = Summa(second_half, SIZE_2);
	int summa_array = Summa(array, SIZE);
	cout << "����� �� ���: " << summa_array << endl;
	cout << "�� ������� ��� ���� �� �����������: " << summa_1_array << endl;
	cout << "�� ������ ��� ���� �� �����������: " << summa_2_array << endl << endl;
	
	int average_value = AverageValue(summa_array, SIZE);
	cout << "������� �� ���: " << average_value << endl;
	average_value = AverageValue(summa_1_array, SIZE_2);
	cout << "������� �� ������ ��� ����: " << average_value << endl;
	average_value = AverageValue(summa_2_array, SIZE_2);
	cout << "������� �� ������ ��� ����: " << average_value << endl;

	return 0;
}
