#include <iostream>

using namespace std;

const size_t maximum_value{ 10 };

int main() {
	/*Написать программу, которая выводит на экран таблицу
	умножения на k, где k — номер варианта. Например, для 7-го
	варианта:
					7 x 2 = 14;
					7 x 3 = 21.*/

	size_t k{};
	size_t sum{};
	cout << "Enter the value from which the table will be calculated: " << endl;
	cin >> k;
	system("cls");
	if (k <= 0) {
		cout << "You entered an incorrect number: " << endl;
		return -1;
	}
	for (int i = 0; i <= maximum_value; i++)
	{
		sum = k * i;
		cout << k << " * " << i << " = " << sum << endl;
	}
	
	return 0;
}
