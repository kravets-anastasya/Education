//Кравец Анастасия Сергеевна
/*Пользователь вводит с клавиатуры символ. Определить,
какой это символ: Буква, цифра, знак препинания или другое.(Сделали на занятии.)*/

#include <iostream>

using namespace std;

int main() {
	char symbol;

	cout << "Enter a character: ";
	cin >> symbol;
	
	if (symbol >= 65 && symbol <= 90 || symbol >= 97 && symbol <= 122 || symbol >= 128 && symbol <= 159 || symbol >= 160 && symbol <= 175 || symbol >= 224 && symbol <= 239) {
		cout << "You have entered the letter " << endl;
	}
	else if (symbol >= 48 && symbol <= 57) {
		cout << "You entered a number " << endl;
	}
	else if (symbol >= 42 && symbol <= 47 || symbol >= 58 && symbol <= 63 || symbol == 33 || symbol == 32) {
		cout << "You have entered a punctuation mark " << endl;
	}
	else {
		cout << "You entered something else" << endl;
	}

	return 0;
}