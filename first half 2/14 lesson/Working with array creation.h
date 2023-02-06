#pragma once
#include <iostream>
using namespace std;

//Рандомайзер в массив.
void NumberGenerator(int array[], int size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++) {
		for (size_t i = 0; i < size; i++) {
			array[i] = rand()% 20 + (- 10);
		}
	}
}

//Ручной ввод в массив
void ManualInputToArray(int array[], int size) {
	for (size_t i = 0; i < size; i++) {
		cout << "Ââåäèòå " << i + 1 << " ÷èñëî: ";
		cin >> array[i];
	}
}

//Вывод массива
void Conclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "}" << endl;
}
