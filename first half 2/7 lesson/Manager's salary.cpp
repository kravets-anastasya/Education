// Кравец Анастасия Сергеевна
/*Зарплата менеджера составляет 200$ + процент от продаж,
продажи до 500$ — 3%, от 500 до 1000 — 5%, свыше 1000 —
8%. Пользователь вводит с клавиатуры уровень продаж
для трех менеджеров. Определить их зарплату, определить
лучшего менеджера, начислить ему премию 200$, вывести
итоги на экран.
Примечание: уровень продаж у всех трех менеджеров
разный.*/

#include <iostream>
#include <clocale>

using namespace std;

enum PERCENTAGE_OF_SALES {
	PERCENT_AE_500 = 3,
	PERCENT_FROM_500_AE_1000 = 5,
	PERCENT_FROM_1000 = 8
};

int main() {
	setlocale(LC_ALL, "Russian");
	const size_t SALARY = 200; 
	const size_t NUMBER_OF_MANAGERS = 3;
	const size_t PRIZE = 200;

	float sales_level[NUMBER_OF_MANAGERS];
	size_t max = 0; 
	float salary_amount[NUMBER_OF_MANAGERS];
	float discount; 

	cout << "Введите уровень продаж для " << NUMBER_OF_MANAGERS << " менеджеров: " << endl;
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++) {
		cout << i + 1 << " менеджера: ";
		cin >> sales_level[i];
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		if (max < sales_level[i]) {
			max = sales_level[i];
			continue;
		} 
		if (sales_level[i] == max) {
			cout << i + 1 << " менеджер имеет такой же доход как и " << i << " менеджер" << endl;
			continue;
		}
	}
	
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		discount = 0;
		if (sales_level[i] < 500) {
			discount = (sales_level[i] * (float)PERCENT_AE_500) / 100;
			salary_amount[i] = discount + SALARY;
		}else if (sales_level[i] >= 500 && sales_level[i] <= 1000) {
			discount = (sales_level[i] * (float)PERCENT_FROM_500_AE_1000) / 100;
			salary_amount[i] = discount + SALARY;
		}
		else if (sales_level[i] > 1000) {
			discount = (sales_level[i] * (float)PERCENT_FROM_1000) / 100;
			salary_amount[i] = discount + SALARY;
		}
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		if (sales_level[i] == max) {
			salary_amount[i] += PRIZE;
			cout << "Лучший менеджер номер: " << i + 1 << endl;
		}
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		cout << "Зарплата " << i + 1 << " менеджера составляет: " << salary_amount[i] << "$" << endl;
	}

	return 0;
}
