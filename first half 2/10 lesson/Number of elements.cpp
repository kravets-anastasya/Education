// ������ ��������� ���������
/*�������� �������, ������������ ����������
�������������, ������������� � ������� ���������
������������� �� �������.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void NumberGenerator(int array[], int size, int beginning, int end) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++) {
		for (size_t i = 0; i < size; i++) {
			array[i] = rand() % (end - beginning) + beginning;
		}
	}
}
void �onclusion(int array[], size_t size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";

	}
	cout << "}" << endl;
}
int NumberOfPositive(int array[], size_t size) {
	int number_of_positive = 0;
	for (size_t i = 0; i < size; i++) {
		if (array[i] > 0) {
			number_of_positive++;
		}
	}
	return number_of_positive;
}
int NumberOfNegative(int array[], size_t size) {
	int number_of_negative = 0;
	for (size_t i = 0; i < size; i++) {
		if (array[i] < 0) {
			number_of_negative++;
		}
	}
	return number_of_negative;
}
int NumberOfZero(int array[], size_t size) {
	int number_of_zero = 0;
	for (size_t i = 0; i < size; i++) {
		if (array[i] == 0) {
			number_of_zero++;
		}
	}
	return number_of_zero;
}

int main() {
	setlocale(LC_ALL, "Russian");

	const int SIZE = 20;
	int array[SIZE];
	int beginning;
	int end;
	int temporary = 0;

	cout << "������� ������ ��������� ����� � �������: ";
	cin >> beginning;
	cout << "������� ����� ��������� ����� � �������: ";
	cin >> end;
	
	if (beginning > end) {
		int temporary = 0;
		temporary = beginning;
		beginning = end;
		end = temporary;
	}

	NumberGenerator(array, SIZE, beginning, end);
	�onclusion(array, SIZE);

	int number_of_positive = NumberOfPositive(array, SIZE);
	cout << "���������� ������������� ��������� ������������� ������� : " << number_of_positive << endl;

	int number_of_negative = NumberOfNegative(array, SIZE);
	cout << "���������� ������������� ��������� ������������� ������� : " << number_of_negative << endl;

	int number_of_zero = NumberOfZero(array, SIZE);
	cout << "���������� ������� ��������� ������������� ������� : " << number_of_zero << endl;

	return 0;
}