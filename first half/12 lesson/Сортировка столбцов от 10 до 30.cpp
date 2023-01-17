#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	/*Заполнить двумерный массив случайными числами от 10 до 30.
	Четные СТОЛБЦЫ отсортировать по возрастанию.
	Нечетные СТОЛБЦЫ по убыванию.
	7 строк
	10 столбцов*/

	srand(time(nullptr));

	const int rows = 7;
	const int columns = 10;

	int array[rows][columns]{};

	int tmp{};
	int top{ rows };

	cout << "The original:" << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = rand() % 20 + 10;
			cout << array[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}

	for (size_t j = 0; j < columns; j++) {

		if ((j % 2) == 0) {//четные
			for (size_t k = 0; k < rows / 2; k++) {

				for (size_t i = 0; i < rows - 1; i++) {
					if (array[i][j] < array[i + 1][j]) {
						tmp = array[i][j];
						array[i][j] = array[i + 1][j];
						array[i + 1][j] = tmp;
					}
				}

				tmp = 0;
				for (size_t i = top - 1; i > 0; i--) {
					if (array[i][j] > array[i - 1][j]) {
						tmp = array[i][j];
						array[i][j] = array[i - 1][j];
						array[i - 1][j] = tmp;
					}
				}
			}
		}
		if ((j % 2) != 0) {//нечетные
			for (size_t k = 0; k < rows / 2; k++) {

				for (size_t i = 0; i < rows - 1; i++) {
					if (array[i][j] > array[i + 1][j]) {
						tmp = array[i][j];
						array[i][j] = array[i + 1][j];
						array[i + 1][j] = tmp;
					}
				}

				tmp = 0;
				for (size_t i = top - 1; i > 0; i--) {
					if (array[i][j] < array[i - 1][j]) {
						tmp = array[i][j];
						array[i][j] = array[i - 1][j];
						array[i - 1][j] = tmp;
					}
				}
			}
		}
	}

	cout << endl;
	cout << "Result: " << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	return 0;
}

