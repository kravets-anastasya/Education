#include <iostream>
#include <string>


using namespace std;

int main() {

	/*Написать функцию, которая удаляет из строки
	символ с заданным номером*/

	
	int number_of_the_deletion_number = {}; //номер числа удаления
	int number_of_numbers = {}; //количество чисел
	const int size = { 100 }; //максимальное количество чисел в функции
	string s;
	
	do{
		cout << "Enter the number of numbers in the line but not more than 100" << endl;
	cin >> number_of_numbers;

	cout << "Enter the number of the number you want to delete, no more than 100" << endl;
	cin >> number_of_the_deletion_number;

	} 
	while (number_of_the_deletion_number > number_of_numbers);

	int array[size] = {}; //функция

	system("cls");

	for (int i = 0; i <= number_of_numbers-1; i++) {
		cout << "Enter: " << endl;
		cin >> array[i];
	}
	
	system("cls");
	
	for (int i = 0; i <= number_of_numbers - 1; i++) {
		cout << array[i] << " ";
	}
	
	return 0;
}