// Кравец Анастасия Сергеевна
/* Написать функцию, определяющую среднее
арифметическое элементов передаваемого ей массива.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void NumberGenerator(int array[], int size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++) {
		for (size_t i = 0; i < size; i++) {
			array[i] = rand();
		}
	}

}
void Сonclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "}" << endl;
}
int Summ(int array[], int size) {
	size_t summa = 0;
	for (size_t i = 0; i < size; i++) {
		summa += array[i];
	}
	return summa;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	const int SIZE = 20;
	int array[SIZE];

	NumberGenerator(array, SIZE);
	Сonclusion(array, SIZE);
	size_t summa = Summ(array, SIZE);

	int arithmetic_mean = summa / SIZE;

	cout << "Среднее арифметическое элементов: " << arithmetic_mean << endl;

	return 0;
}
