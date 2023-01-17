#include <iostream>

using namespace std;

const int maximum_value{ 20 };

int main() {
	/*Ќайти произведение всех целых чисел от a до 20 (значение
a вводитс€ с клавиатуры: 1 <=a <= 20).*/

	int a {};
	long long sum{1};
	cout << "Enter the value from which the product will be searched: " << endl;
	cin >> a;
	
	system("cls");
	if (a >= maximum_value || a <= 1)
	{
		cout << "You entered an incorrect number! " << endl;
		return -1;
	}
	for (int i = a; i <= maximum_value; i++)
	{
		sum *= a++;
		cout << sum << endl;
	}
	cout << "Your number is equal to: " << sum << endl;
	return 0;
}