#include <iostream>
# include <stdio.h>

using namespace std;

int main() {
	/*Подсчитать количество целых чисел в диапазоне от 100
	до 999, у которых все цифры разные*/

	size_t minimum_number = { 100 };
	size_t maximum_number = { 999 };
	size_t number = {};
	size_t number2 = {};
	size_t number3 = {};
	size_t number1 = {};
	size_t number_maximum = {};

	for (int i = minimum_number; i <= maximum_number; i++) {
		number = i;
		if ((number / 2 - (int)number / 2) == 0) {
			size_t number3 = ((number / 100) % 10);
			size_t number2 = ((number / 10) % 10);
			size_t number1 = (number % 10);
			if (number1 != number2 && number2 != number3 && number1 != number3) {
				number_maximum++;
				cout << "Number " << number_maximum << ": " << number << endl;

			}
		}
	}

	cout << "Total number of numbers: " << number_maximum << endl;

	return 0;
}
