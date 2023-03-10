#include <iostream>

using namespace std;
const int amount_from = 500;


int main() {
	/*Напишите программу, которая вычисляет сумму целых
	чисел от а до 500 (значение а вводится с клавиатуры)*/

	int initial_number{};
	int sum{};
	cout << "Enter the number from which the sum of the numbers up to 500 will be calculated: " << endl;
	cin >> initial_number;

	if (initial_number >= amount_from || initial_number < 0)
	{
		cout << "You entered an incorrect number: " << endl;
		return -1;
	}
	
	for (int i = initial_number; i < amount_from; i++)
	{
		sum += initial_number++;
		cout << sum << endl;
	}
	
	cout << endl << "Your number: " << sum << endl;

	return 0;
}
