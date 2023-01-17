#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*Пользователь вводит любое целое число. Необходимо из
	этого целого число удалить все цифры 3 и 6 и вывести обратно на экран*/

	long long user_number = {}; //введенное число
	int number_of_digits = {}; //количество цифр
	int number = {}; 

	cout << R"(Enter any number that you want to change all
 the digits 3 and 6 will be removed from it:)" << endl;
	cin >> user_number;
	if (user_number < 0 || user_number >= 999999999) {
		cout << "You entered an incorrect number";
		return 1;
	}
	while (user_number > 0 )
	{
		if (user_number % 10 != 3 && user_number % 10 != 6)
		{
			number *= 10;
			number += user_number % 10;
		}
		user_number /= 10;
	}
	
	cout << "Result: ";
	
	while (number > 0)
	{
		cout << number % 10;
		number /= 10;
	}
	
	return 0;
}