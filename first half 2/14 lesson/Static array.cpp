// ������ ��������� ���������
/*�������� �������, ������� �������� ���������
�� ����������� ������ � ��� ������. ������� ������������ �������������, ������������� � ������� ��������
� ��������� ������������ �������.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

#include "../../Working with array creation.h"
#include "../../Functions in an array.h"
#include "Array_functions_split.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int const size{20};
	int menu_selection{};
	int array[size];

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
	cout << "\n ��� ������: \n";
	Conclusion(array, size);

	cout << "\n ������������� �����: \n";
	int positive_size{};
	int* positives = CopyPositiveNumbers(array, size, positive_size);
	Conclusion(positives, positive_size);

	cout << "\n ������������� �����: \n";
	int negative_size{};
	int* negatives = CopyNegativeNumbers(array, size, negative_size);
	Conclusion(negatives, negative_size);

	cout << "\n ����: \n";
	int zeros_size{};
	int* zeros = CopyZeros(array, size, zeros_size);
	Conclusion(zeros, zeros_size);


	return 0;
}
