#include <iostream>

using namespace std;



int main() {
	/*ѕользователь вводит с клавиатуры 7 целых чисел.
	Ќапишите программу, котора€ определит максимальное
	значение из этих 7 чисел (решение должно быть простым).*/

	cout << "Enter seven different numbers: "  << endl;

	size_t user_number1 {};
	size_t user_number2 {};
	cin >> user_number1 >> user_number2;

	if (user_number1 < user_number2) {
	user_number1 = user_number2;
	}
		cin >> user_number2;

	if (user_number1 < user_number2) {
		user_number1 = user_number2;
	}
		cin >> user_number2;

	if (user_number1 < user_number2) {
		user_number1 = user_number2;
	}
		cin >> user_number2;

	if (user_number1 < user_number2) {
		user_number1 = user_number2;
	}
		cin >> user_number2;

	if (user_number1 < user_number2) {
		user_number1 = user_number2;
	}
		cin >> user_number2;

	if (user_number1 < user_number2) {
		user_number1 = user_number2;
	}
		
	cout << "The largest number: " << user_number1 << endl;

	return 0;
}