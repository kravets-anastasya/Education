// Кравец Анастасия Сергеевна
/*Пользователь вводит данные о своих расходах в рублях за неделю (каждый день). 
Написать программу, которая вычисляет:
- среднюю (за неделю) потраченную сумму;
- общую сумму, потраченную пользователем за неделю;
- количество дней и их названия (например, «вторник»), когда сумма расхода (в день) превысила 1000 рублей.
*/

#include <iostream>
#include <clocale>

using namespace std;
void InputValue (int expenses[], int size) {
	cout << "Введите значение " << endl;
	for (size_t i = 0; i < size; i++) {
		cout << i + 1 << ": ";
		cin >> expenses[i];
	}
}
int Summa(int expenses[], int size) {
	int summa = 0;
	for (size_t i = 0; i < size; i++) {
		summa += expenses[i];
	}
	return summa;
}
int NumberOfDays(int expenses[], int size, int exceeded) {
	int number_of_days = 0;
	for (size_t i = 0; i < size; i++){
		if (expenses[i] > exceeded) {
			number_of_days++;
		}
	}
	return number_of_days;
}
int main() {
	setlocale(LC_ALL, "Russian");

	const short SIZE = 7;
	const short EXCEEDED = 1000;
	int expenses[SIZE];

	InputValue(expenses, SIZE);

	int summa = Summa(expenses, SIZE);
	int average_value = summa / SIZE;
	int number_of_days = NumberOfDays(expenses, SIZE, EXCEEDED);

	cout << "Средняя сумма потраченная за неделю: " << average_value << endl;
	cout << "Общую сумма, потраченная за неделю: " << summa << endl;
	cout << "Количество дней когда сумма расхода в день, превысила 1000 рублей: " << number_of_days << endl;
	for (size_t i = 0; i < SIZE; i++){
		if (expenses[i] > EXCEEDED) {
			switch (i) {
			case 0:
				cout << "Понедельник: " << expenses[i] << endl;
				break;
			case 1:
				cout << "Вторник: " << expenses[i] << endl;
				break;
			case 2:
				cout << "Среда: " << expenses[i] << endl;
				break;
			case 3:
				cout << "Четверг: " << expenses[i] << endl;
				break;
			case 4:
				cout << "Пятница: " << expenses[i] << endl;
				break;
			case 5:
				cout << "Суббота: " << expenses[i] << endl;
				break;
			case 6:
				cout << "Воскресенье: " << expenses[i] << endl;
				break;
			}
		}
	}

	return 0;
}
