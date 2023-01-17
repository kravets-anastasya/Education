#include <iostream>

using namespace std;

int main() {
	/*Найти среднее арифметическое всех целых чисел от 1 до 1000*/
	size_t amount_from = 1000;
	size_t initial_number {1};
	float sum{};
	
	for (int i = initial_number; i < amount_from; i++)
	{
		sum += initial_number++;
		cout << sum << endl;
	}
	
	cout << endl << "Your number: " << sum / (float)amount_from << endl;

	return 0;
}
