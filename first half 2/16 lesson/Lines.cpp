//Кравец Анастасия Сергеевна
/*Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.
Задание 3. Подсчитать количество слов во введенном предложении.*/
#include <iostream>

#include <string>

using namespace std;

int main() {
	
	string name;
	cout << "Enter your full name(English): ";
	getline(cin, name);
	cout << "Your full name: " << name << endl;
	int number_of_characters = name.size();
	//Задание 3. Подсчитать количество слов во введенном предложении.
	int quantity_words{};
	for (int i = 0; i < number_of_characters; i++) {
		if (name[i] == ' ') {
			quantity_words++;
		}
	}
	//Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.
	int quantity_letters{};
	int number_of_digits{};
	int number_of_remaining_characters{};
	for (size_t i = 0; i < number_of_characters; i++){
		if ((name[i] >= 'A' && name[i] <= 'Z') ||
			(name[i] >= 'a' && name[i] <= 'z')) {
			quantity_letters++;
		}
		else if (name[i] >= '0' && name[i] <= '9') {
			number_of_digits++;
		}
		else {
			number_of_remaining_characters++;
		}
	}
	

	//Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
	for (int i = 0; i < number_of_characters; i++) {
		if (name[i] == ' ') {
			name[i] = '\t';
		}
	}

	cout << "Your full name: " << name << endl;
	cout << "Quantity words: " << quantity_words << endl;
	cout << "Quantity letters: " << quantity_letters << endl;
	cout << "Number of digits: " << number_of_digits << endl;
	cout << "Number of remaining characters: " << number_of_remaining_characters << endl;

	return 0;
}
