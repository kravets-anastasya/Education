// Кравец Анастасия Сергеевна
/*Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив.
Элементы массивов можно сгенерировать в произвольном диапазоне.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void Summ (int array_3[], int array_2[], int array_1[], int size){
	for (size_t i = 0; i < size; i++){
		array_3[i] = array_1[i] + array_2[i];
	}
}
void Ñonclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++){
		cout << array[i] << ", ";

	}
	cout << "}" << endl;
}
void NumberGenerator(int array[], int size) {
	for (size_t i = 0; i < size; i++){
		for (size_t i = 0; i < size; i++) {
			array[i] = rand();
		}
	}

}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	const size_t SIZE = 5;
	int array_1[SIZE];
	int array_2[SIZE];
	int array_3[SIZE];

	NumberGenerator(array_1, SIZE);
	cout << "Массив 1: ";
	Ñonclusion(array_1, SIZE);
	NumberGenerator(array_2, SIZE);
	cout << "Массив 2: ";
	Ñonclusion(array_2, SIZE);
	Summ(array_3, array_2, array_1, SIZE);
	cout << "Массив 3 в виде суммы двух массивов: ";
	Ñonclusion(array_3, SIZE);
	
	return 0;
}
