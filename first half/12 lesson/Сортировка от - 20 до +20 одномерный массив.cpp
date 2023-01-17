#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	/*Дан массив случайных чисел в диапазоне от -20 до +20.
	Необходимо найти позиции крайних отрицательных
	элементов (самого левого отрицательного элемента и
	самого правого отрицательного элемента) и
	отсортировать элементы, находящиеся между ними.*/

	srand(time(NULL));

	const int length = 10;
	int array[length]{};
	int last_number_array{ 1 };
	int number_array{ 1 };
	int temporary{0};
	int first_number_array{};
	int minimum_element{};
	int exchange_element{};

	for (int i = 0; i < length; i++) {
		array[i] = rand() % 40 - 20;
		cout << array[i] << "\t";
	}
	cout << endl;
	do{
		if (array[temporary] < 0) {
			number_array = array[temporary];
			first_number_array = temporary;
		}
		temporary++;
	} while (number_array > 0);
	
	for (int i = 0; i < length; i++) {
		if (array[i] < 0) {
			last_number_array = i;
		}
	}
	cout << endl << "First number array: " << first_number_array << endl;
	cout << endl << "Last number array: " << last_number_array << endl;

	for (size_t i = first_number_array; i <= last_number_array; i++){
		minimum_element = i;
		for (size_t j = i+1; j <= last_number_array; j++){
			if (array[j] < array[minimum_element]) {
				minimum_element = j;
			}
			exchange_element = array[i];
			array[i] = array[minimum_element];
			array[minimum_element] = exchange_element;
		}
	}
	cout << endl << "Result array: " << endl;

	for (size_t i = 0; i < length; i++){
		cout << array[i] << '\t';
	}

	return 0;
}
