#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename T>
T arithmetic_mean(T array[], T length) {
	T counting{};
	T summ{};
	for (size_t i = 0; i < length; i++) {
		summ += array[i];
		counting++;
	}
	T arithmetic = summ / counting;
	return arithmetic;
}

int main() {
	/*1. Написать шаблон функции для поиска среднего
		арифметического значения массива.*/

	const int length{ 10 };
	int arr[length]{};

	srand(time(NULL));

	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Arithmetic mean: " << arithmetic_mean(arr, length) << endl;

	return 0;
}