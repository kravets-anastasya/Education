//Кравец Анастасия Сергеевна
/* Вася работает программистом и получает 50$ за каждые
100 строк кода. За каждое третье опоздание на работу Васю
штрафуют на 20$. Реализовать меню:
	пользователь вводит желаемый доход Васи и количество
опозданий, посчитать, сколько строк кода ему надо написать;
	пользователь вводит количество строк кода, написанное
Васей и желаемый объем зарплаты. Посчитать, сколько
раз Вася может опоздать;
	пользователь вводит количество строк кода и количество
опозданий, определить, сколько денег заплатят Васе и
заплатят ли вообще.*/

#include <iostream>

using namespace std;

int main() {
	
	const size_t payment_of_100_lines = 50;
	const size_t penalty_for_every_3_delays = 20;
	const size_t penalty_for_each_number_of_days = 3;
	const size_t number_of_lines_to_be_paid = 100;

	size_t number_of_lines_of_code{}; //количество строк кода
	size_t number_of_delays{}; // количество опозданий
	size_t earnings{}; // заработок
	short user_choice{}; // выбор пользователя

	cout << R"(
	Select one of the menu items according to the calculation method:
	1.Do you want to enter the desired income and the number of delays and calculate
		how many lines of code you need to write?
	2.Do you want to enter the number of lines of code and the desired salary,
		and calculate how many times you can be late?
	3.Do you want to enter the number of lines of code and the number of delays			
		and determine how much you will be paid?)" << endl;

	cin >> user_choice;
	system("cls");

	switch (user_choice) {
	case 1: {
		cout << "Enter the profit: " << endl;
		cin >> earnings;
		system("cls");
		cout << "Enter number of delays: " << endl;
		cin >> number_of_delays;
		system("cls");

		size_t number_of_lines_of_code = ((earnings - ((number_of_delays / penalty_for_each_number_of_days) *
			penalty_for_every_3_delays)) / payment_of_100_lines) * number_of_lines_to_be_paid;

		cout << "You need to write some lines of code: " << number_of_lines_of_code << endl;
		break;
	}	  
	case 2: {
		cout << "Enter the profit: " << endl;
		cin >> earnings;
		system("cls");
		cout << "Enter number of lines of code: " << endl;
		cin >> number_of_lines_of_code;
		system("cls");

		size_t number_of_delays = (((number_of_lines_of_code * payment_of_100_lines) - earnings) / penalty_for_each_number_of_days) +
			(((number_of_lines_of_code * payment_of_100_lines) - earnings) % penalty_for_each_number_of_days);

		cout << "You can afford to be late: " << number_of_delays << endl;
		break;
	}
	case 3: {
		cout << "Enter number of delays: " << endl;
		cin >> number_of_delays;
		system("cls");
		cout << "Enter number of lines of code: " << endl;
		cin >> number_of_lines_of_code;
		system("cls");

		size_t earnings = (number_of_lines_of_code * payment_of_100_lines) -
			((number_of_delays / penalty_for_each_number_of_days) * penalty_for_every_3_delays);
		cout << "You will be paid: " << earnings << endl;
		break;
	}
	default:
		cout << "Incorrect information!!!" << endl;
	}
	return 0;
}