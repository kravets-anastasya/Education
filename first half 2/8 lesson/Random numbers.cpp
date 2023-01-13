// Кравец Анастасия Сергеевна
/*В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/


#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand (time(nullptr));

	const short size = 20;
	size_t namber[size];

	for (size_t i = 0; i < size; i++){
		namber[i] = rand();
	}
	cout << "{ ";
	for (size_t i = 0; i < size; i++) {
		cout << namber[i] << "; ";
	}
	cout << " }" << endl;

	int max = namber[0];
	int min = namber[0];
	
	for (size_t i = 0; i < size; i++){
		if (max < namber[i]) {
			max = namber[i];
		}
		if (min > namber[i]) {
			min = namber[i];
		}
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}
