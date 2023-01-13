// Кравец Анастасия Сергеевна
/*Написать функцию, которая получает в качестве параметров 2 целых числа 
и возвращает сумму чисел из диапазона между ними.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void NumberGenerator(int array[], size_t size) {
	for (size_t i = 0; i < size; i++) {
		for (size_t i = 0; i < size; i++) {
			array[i] = rand();
		}
	}

}
void Ñonclusion(int array[], size_t size) {
	cout << "{";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << ", ";

	}
	cout << "}" << endl;
}
int Summa(size_t start_range, size_t end_range,int array[]) {
	int sum_of_negative = 0;
	for (size_t i = start_range; i < end_range - 1; i++) {
		sum_of_negative += array[i];
	}
	return sum_of_negative;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	const size_t SIZE = 15;
	int array[SIZE];
	int start_range = 0;
	int end_range = 0;
	
	NumberGenerator(array, SIZE);
	Ñonclusion(array, SIZE);

	do {
		cout << "Введите начала диапазона: ";
		cin >> start_range;
		cout << "Введите конца диапазона: ";
		cin >> end_range;
		if (start_range < end_range) break;
		cout << "Вы ввели неверно. Попробуйте снова." << endl;
		cout << "Начальное число должно быть меньше чем конечное." << endl;
		system("pause");
		system("cls");
	} while (true);
	
	int sum_of_negative = Summa(start_range, end_range, array);
	cout << "Сумма: " << sum_of_negative;

	return 0;
}
