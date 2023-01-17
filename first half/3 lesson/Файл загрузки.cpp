#include <iostream>

using namespace std;

int main() {
	/*ѕользователь вводит с клавиатуры размер
	одного файла в гигабайтах и скорость интернет-соединени€
	в битах в секунду. ѕосчитать, за сколько часов, минут
	и секунд скачаетьс€ файл.
	*/

	double_t the_filesize_in_gigabytes = 0;
	double_t speed_in_bits_per_second = 0;
	const double_t bytes_in_gigabytes = 1073741824;
	const size_t bytes_in_bits = 8;
	const size_t seconds_per_minute = 60;
	const size_t minute_per_hour = 60;
	const size_t seconds_per_hour = seconds_per_minute * minute_per_hour;

	cout << "Enter the file size in gigabytes: "; "\n";
	cin >> the_filesize_in_gigabytes; "\n";

	cout << "Enter the internet speed in bits per second: "; "\n";
	cin >> speed_in_bits_per_second; "\n";

	double_t total_size_in_bytes = bytes_in_gigabytes * the_filesize_in_gigabytes;
	double_t total_size_in_bits = total_size_in_bytes * bytes_in_bits;

	long long download_time = total_size_in_bits / speed_in_bits_per_second;
	//cout << total_size_in_bytes << endl;
	//cout << total_size_in_bits << endl;
	//cout << download_time << endl;

	size_t time_of_seconds = download_time % seconds_per_minute;
	size_t time_in_hours = download_time / seconds_per_hour;
	size_t time_in_minutes = (download_time - (time_in_hours * seconds_per_hour)) / seconds_per_minute;

	cout << "time_translation= " << time_in_hours << ':' << time_in_minutes << ':' << time_of_seconds; '\n';

	return 0;
}