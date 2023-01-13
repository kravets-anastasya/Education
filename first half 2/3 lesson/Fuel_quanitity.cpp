//Кравец Анастасия Сергеевна
/*ЗАДАНИЕ
Грузовой самолет должен пролететь с грузом из пункта А
в пункт С через пункт В. Емкость бака для топлива у самоле-
та — 300 литров. Потребление топлива на 1 км в зависимости
от веса груза у самолета следующее:
■■до 500 кг — 1 литров/км;
■■до 1000 кг — 4 литров/км;
■■до 1500 кг — 7 литров/км;
■■до 2000 кг — 9 литров/км;
■■более 2000 кг — самолет не поднимает.
Пользователь вводит расстояние между пунктами А и В,
и расстояние между пунктами В и С, а также вес груза. Про-
грамма должна рассчитать какое минимальное количество
топлива необходимо для дозаправки самолету в пункте В,
чтобы долететь из пункта А в пункт С. В случае невозмож-
ности преодолеть любое из расстояний — программа должна
вывести сообщение о невозможности полета по введенному
маршруту.*/

#include <iostream>

using namespace std;

enum waste {
	waste_of_fuel_at_a_weight_of_up_to_500 = 1,
	waste_of_fuel_at_a_weight_of_up_to_1000 = 4,
	waste_of_fuel_at_a_weight_of_up_to_1500 = 7,
	waste_of_fuel_at_a_weight_of_up_to_2000 = 9
};

int main() {
	/*size_t const waste_of_fuel_at_a_weight_of_up_to_500 = 1;	// Трата топлива при весе до 500 кг
	size_t const waste_of_fuel_at_a_weight_of_up_to_1000 = 4;	// Трата топлива при весе до 1000 кг
	size_t const waste_of_fuel_at_a_weight_of_up_to_1500 = 7;	// Трата топлива при весе до 1500 кг
	size_t const waste_of_fuel_at_a_weight_of_up_to_2000 = 9;	// Трата топлива при весе до 2000 кг*/

	size_t distance_from_A_to_B = 0;		// Растояние из пункта А в пункт В
	size_t distance_from_B_to_C = 0;		// Растояние из пункта В в пункт С
	size_t cargo_weight = 0;				// Вес груза
	float refueling = 0;					// Дозаправка
	size_t const max_capacity = 300;		// Максимальная вместимость
	float distance_of_unspent_fuel = 0;		// Растояние не потраченного топлива
	float remaining_distance = 0;			// Оставшееся растояние

	cout << "Enter the distance from A to B: " << endl;
	cin >> distance_from_A_to_B;
	if (distance_from_A_to_B <= 0) {
		cout << "This number cannot be!" << endl;
		return 0;
	}

	cout << "Enter the distance from B to C: " << endl;
	cin >> distance_from_B_to_C;
	if (distance_from_B_to_C <= 0) {
		cout << "This number cannot be!" << endl;
		return 0;
	}

	cout << "Enter the weight of the cargo: " << endl;
	cin >> cargo_weight;
	if (cargo_weight <= 0) {
		cout << "This number cannot be!" << endl;
		return 0;
	}

	float sum_of_distances = distance_from_A_to_B + distance_from_B_to_C;	//Сумма расстояний

	if (cargo_weight > 2000) {
		cout << "A plane with such a weight of cargo will not fly" << endl;
	}
	else if (cargo_weight <= 2000) {
		if (cargo_weight <= 500) {
			float max_distance = max_capacity / waste_of_fuel_at_a_weight_of_up_to_500; // Максимальное растояние
			if (sum_of_distances < max_distance) {
				cout << "You don't need refueling!" << endl;
			}
			else {
				if (distance_from_B_to_C > max_distance) {
					cout << "A plane with such a weight of cargo will not fly" << endl;
				}
				else {
					distance_of_unspent_fuel = max_distance - distance_from_A_to_B;
					remaining_distance = distance_from_B_to_C - distance_of_unspent_fuel;
					refueling = remaining_distance * waste_of_fuel_at_a_weight_of_up_to_500;
					cout << "You have to refuel: " << refueling << " liters" << endl;
				}
			}

		}
		else if (cargo_weight <= 1000) {
			float max_distance = max_capacity / waste_of_fuel_at_a_weight_of_up_to_1000; // Максимальное растояние
			if (sum_of_distances < max_distance) {
				cout << "You don't need refueling!" << endl;
			}
			else {
				if (distance_from_B_to_C > max_distance) {
					cout << "A plane with such a weight of cargo will not fly" << endl;
				}
				else {
					distance_of_unspent_fuel = max_distance - distance_from_A_to_B;
					remaining_distance = distance_from_B_to_C - distance_of_unspent_fuel;
					refueling = remaining_distance * waste_of_fuel_at_a_weight_of_up_to_1000;
					cout << "You have to refuel: " << refueling  << " liters" << endl;
				}
			}

		} 
		else if (cargo_weight <= 1500) {
			float max_distance = max_capacity / waste_of_fuel_at_a_weight_of_up_to_1500; // Максимальное растояние
			if (sum_of_distances < max_distance) {
				cout << "You don't need refueling!" << endl;
			}
			else {
				if (distance_from_B_to_C > max_distance) {
					cout << "A plane with such a weight of cargo will not fly" << endl;
				}
				else {
					distance_of_unspent_fuel = max_distance - distance_from_A_to_B;
					remaining_distance = distance_from_B_to_C - distance_of_unspent_fuel;
					refueling = remaining_distance * waste_of_fuel_at_a_weight_of_up_to_1500;
					cout << "You have to refuel: " << refueling + 1 << " liters" << endl;
				}
			}

		}
		else if (cargo_weight <= 2000) {
			if (cargo_weight <= 2000) {
				float max_distance = (float)max_capacity / (float)waste_of_fuel_at_a_weight_of_up_to_2000; // Максимальное растояние
				if (sum_of_distances < max_distance) {
					cout << "You don't need refueling!" << endl;
				}
				else {
					if (distance_from_B_to_C > max_distance) {
						cout << "A plane with such a weight of cargo will not fly" << endl;
					}
					else {
						distance_of_unspent_fuel = max_distance - distance_from_A_to_B;
						remaining_distance = distance_from_B_to_C - distance_of_unspent_fuel;
						refueling = remaining_distance * waste_of_fuel_at_a_weight_of_up_to_2000;
						cout << "You have to refuel: " << refueling + 1 << " liters" << endl;
					}
				}

			}
		}
	}

	return 0;
}