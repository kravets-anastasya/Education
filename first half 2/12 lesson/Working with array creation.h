#pragma once
#include <iostream>
using namespace std;

//����������� � ������.
void NumberGenerator(int array[], int size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++) {
		for (size_t i = 0; i < size; i++) {
			array[i] = rand();
		}
	}

}

//������ ���� � ������
void ManualInputToArray(int array[], int size) {
	for (size_t i = 0; i < size; i++) {
		cout << "������� " << i + 1 << " �����: ";
		cin >> array[i];
	}
}

//����� �������
void Conclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "}" << endl;
}
