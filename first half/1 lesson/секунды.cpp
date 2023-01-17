#include <iostream>

using namespace std;

int main() {
	/*Пользователь вводит с клавиатуры время в секундах.
	Необходимо написать программу, которая переведет введенные пользователем
	секунды в часы, минуты, секунды и выведит их на экран.*/

	size_t user_data_in_seconds = 0;

	cout << "Please enter the data in seconds: "; "\n";
	cin >> user_data_in_seconds; "\n";

	const size_t seconds_per_minute = 60;
	const size_t minute_per_hour = 60;
	const size_t seconds_per_hour = seconds_per_minute * minute_per_hour;

	const size_t time_of_seconds = user_data_in_seconds % seconds_per_minute;
	const size_t time_in_hours = user_data_in_seconds / seconds_per_hour;
	const size_t time_in_minutes = (user_data_in_seconds - (time_in_hours * seconds_per_hour)) / seconds_per_minute;

	cout << "time_translation= " << time_in_hours << ':' << time_in_minutes << ':' << time_of_seconds; '\n';

	return 0;
}