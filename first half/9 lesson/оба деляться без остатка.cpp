#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*Пользователь вводит любое целое число. Необходимо вывести все
	целые числа, на которые заданное число делиться без остатка.*/
	size_t a = {};
	size_t b = {};
	cout << R"(Enter any number that you want 1:)" << endl;
	cin >> a;
	cout << R"(Enter any number that you want 2:)" << endl;
	cin >> b;

	int i;
	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			cout << i << "\n";
	}
	return 0;
}
