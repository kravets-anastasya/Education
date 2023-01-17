#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*Пользователь вводит любое целое число A. Необходимо 
	вывести все целые числа В, для которых  А делиться без
	остатка на В*В и не делиться без остатка на В*В*В.*/
	size_t a = {};
	
	cout << R"(Enter any number that you want:)" << endl;
	cin >> a;
	if (a < 0 || a >= 999999999) {
		cout << "You entered an incorrect number";
		return 1;
	}
	int c = (int)sqrt((double)a);
	for (int b = 2; b <= c; b++){
		if (a % (b * b) == 0 && a % (b * b * b))
			cout << b << endl;
	}
	return 0;
}