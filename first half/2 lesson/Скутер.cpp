#include <iostream>

using namespace std;

int main() {
	/*Пользователь вводит с клавиатуры время начала и время завершения использования скутера (часы,
	минуты и секунды). Посчитать стоимость поездки, если
	стоимость минуты — 2 гривны.
	*/

	float start_time_per_second = 0;
	float start_time_per_minute = 0;
	float start_time_per_hour = 0;

	float end_of_work_time_per_second = 0;
	float end_of_work_time_per_minute = 0;
	float end_of_work_time_per_hour = 0;

	const size_t trip_cost_per_minute = 2;
	const size_t seconds_per_minute = 60;
	const size_t minute_per_hour = 60;
	cout << "start time per hour: " << endl;
	cin >> start_time_per_hour;

	cout << "start time per minute: " << endl;
	cin >> start_time_per_minute;

	cout << "start time per second: " << endl;
	cin >> start_time_per_second;
	
	float hour_start = start_time_per_hour * minute_per_hour;
	float second_start = start_time_per_second / seconds_per_minute;
	float time_start = hour_start + second_start + start_time_per_minute;

	cout << "end of work time per hour: " << endl;
	cin >> end_of_work_time_per_hour;

	cout << "end of work time per minute: " << endl;
	cin >> end_of_work_time_per_minute;

	cout << "end of work time per second: " << endl;
	cin >> end_of_work_time_per_second;
	
	float end_of_hour = end_of_work_time_per_hour * minute_per_hour;
	float end_of_second = end_of_work_time_per_second / seconds_per_minute;
	float end_of_time = end_of_hour + end_of_second + end_of_work_time_per_minute;

	float time = end_of_time - time_start;
	float cost = time * trip_cost_per_minute;

	cout << "the cost of travel: "<< ceil(cost);

	return 0;
}
