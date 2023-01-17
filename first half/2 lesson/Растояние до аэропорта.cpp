#include <iostream>

using namespace std;

int main() {
	/*Пользователь вводит с клавиатуры расстояние
	до аэропорта и время, за которое нужно доехать. 
	Вычислить скорость, с которой ему нужно ехать.
	*/
	float distance_to_the_airport_in_meters = 0;
	float time_to_the_airport_in_minutes = 0;

	cout << " enter distance to the airport in meters: " << endl;
	cin >> distance_to_the_airport_in_meters;

	cout << " enter time to the airport in minutes: " << endl;
	cin >> time_to_the_airport_in_minutes;

	float distance_to_the_airport_in_kilometers = distance_to_the_airport_in_meters / 1000;
	float time_to_the_airport_per_hour = time_to_the_airport_in_minutes / 60;

	// Скорость = растояние / время
	int travel_speed = distance_to_the_airport_in_kilometers / time_to_the_airport_per_hour;
	cout << "travel speed km / h: " << travel_speed << endl;

	return 0;
}
