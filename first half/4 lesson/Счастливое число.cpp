#include <iostream>

using namespace std;



int main() {
	/* Полбзователь вводит с клавиатуры целое шестизначное
	число. Написать программу, которая определяет,
	являеться ли введенное число - счастливым (Счастливым
	считаеться шестизначное число, у которого сумма первых
	3 цифр равна сумме вторых трех цифр). Если пользователь
	ввел не шестизначное число - сообщить об ошибке.
	*/
	size_t half_of_the_number;

	cout << "Enter a six - digit number: " << endl;

	cin >> half_of_the_number;

	if (half_of_the_number < 100000 || half_of_the_number > 999999) {

		cout << "You entered an incorrect number!" << endl;
		return -1;
	}
	
	size_t number1 = ((half_of_the_number / 100000) + ((half_of_the_number / 10000) % 10) + ((half_of_the_number / 1000) % 10));
	size_t number2 = (((half_of_the_number / 100) % 10) + ((half_of_the_number / 10) % 10) + (half_of_the_number % 10));

	size_t lucky_number = number1 == number2;

	if (lucky_number == 1) {
		cout << "Your number is lucky" << endl;
		return 0;
	}
	else if (lucky_number == 0)
		cout << "You have an unlucky number" << endl;
	return 0;
}
