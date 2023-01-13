// Кравец Анастасия Сергеевна
/*Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 — поиск
между 3-м и 6-м месяцем). Необходимо определить месяц,
в котором прибыль была максимальна и месяц, в котором
прибыль была минимальна с учетом выбранного диапазона.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	const short SIZE = 12;
	size_t namber[SIZE];
	size_t start_range;
	size_t end_range;
	
	cout << "Введите прибыль фирмы за " << endl;
	for (size_t i = 0; i < SIZE; i++) {
		cout << i + 1 <<  месяц: ";
		cin >> namber[i];
	}
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

	int max = namber[start_range];
	int min = namber[start_range];
	
	for (size_t i = start_range - 1; i < end_range; i++) {
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
