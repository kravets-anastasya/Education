#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*Пользователь вводит любое целое число. Необходимо вывести все
	целые числа, на которые заданное число делиться без остатка.*/
	size_t a = {};

	cout << R"(Enter any number that you want:)" << endl;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			cout << i << "\n";
	}
	return 0;
}
