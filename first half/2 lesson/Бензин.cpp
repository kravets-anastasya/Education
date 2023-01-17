#include <iostream>

using namespace std;

int main() {
	/*Пользователь вводит с клавиатуры расстояние,
	расход бензина на 100 км и стоимость трех видов бензина.
	Вывести на экран сравнительную таблицу со стоимостью
	поездки на разных видах бензина.
	*/

	float distance = 0;
	float fuel_consumption_per_100_km = 0;
	float price_of_gasoline_1 = 0;
	float price_of_gasoline_2 = 0;
	float price_of_gasoline_3 = 0;

	cout << " Enter the distance: " << endl;
	cin >> distance;

	cout << " Enter the fuel consumption per 100 km: " << endl;
	cin >> fuel_consumption_per_100_km;

	cout << " Enter the price of gasoline 1: " << endl;
	cin >> price_of_gasoline_1;

	cout << " Enter the price of gasoline 2: " << endl;
	cin >> price_of_gasoline_2;

	cout << " Enter the price of gasoline 3: " << endl;
	cin >> price_of_gasoline_3;

	// Формула расчета: Расход топлива/100*расстояние
	float amount_of_gasoline = (fuel_consumption_per_100_km / 100) * distance;
	cout << " Amount of gasoline: " << ceil(amount_of_gasoline) << endl;

	float cost_per_1_petrol = amount_of_gasoline * price_of_gasoline_1;
	cout << " The cost of a trip on 1 petrol: " << cost_per_1_petrol << endl;

	float cost_per_2_petrol = amount_of_gasoline * price_of_gasoline_2;
	cout << " The cost of a trip on 2 petrol: " << cost_per_2_petrol << endl;

	float cost_per_3_petrol = amount_of_gasoline * price_of_gasoline_3;
	cout << " The cost of a trip on 3 petrol: " << cost_per_3_petrol << endl;

	return 0;
}
