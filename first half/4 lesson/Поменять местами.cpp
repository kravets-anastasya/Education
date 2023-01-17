#include <iostream>

using namespace std;



int main() {
	/*Пользователь вводит четырехзначное число.
	Необходимо поменять в этом числе 1 и 2 цифры, а также
	3 и 4 цифры. Если подьзователь вводит не четырехзначное 
	число - вывести сообщение об ошибке.*/
	
	size_t user_number{};

	cout << "Enter a four-digit number: " << endl;

	cin >> user_number;

	if (user_number < 1000 || user_number > 9999) {

		cout << "You entered an incorrect number!" << endl;
		return -1;
	}
	size_t number1 = ((user_number / 1000) % 10);
	size_t number2 = ((user_number / 100) % 10);
	size_t number3 = ((user_number / 10) % 10);
	size_t number4 = (user_number % 10);

	cout << number2 << number1 << number4 << number3 << endl;

	return 0;
}
