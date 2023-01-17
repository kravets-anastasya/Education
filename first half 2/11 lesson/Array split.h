#pragma once
//2. —делать заголовочный файл с функци€ми по разделению массива на 2 части.
#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void Conclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "}" << endl << endl;
}
void ManualInputToArray(int array[], int size) {
	for (size_t i = 0; i < size; i++) {
		cout << "¬ведите ваш доход за " << i + 1 << " мес€ц: ";
		cin >> array[i];
	}
}
void ArraySplit_1_Half(int array[], int first_half[], int size_2) {
	for (size_t i = 0; i < size_2; i++) {
		first_half[i] = array[i];
	}
}
void ArraySplit_2_Half(int array[], int second_half[], int size_2) {
	for (size_t i = 0; i < size_2; i++) {
		second_half[i] = array[i + size_2];
	}
}