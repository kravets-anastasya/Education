#include <iostream>

using namespace std;



int main() {
	/*Пользователь вводит с клавиатуры символ.
	Определить, какой это символ: Буква, цифра, 
	знак препинания или другое.*/

	char user_symbol{};

	cout << "Enter the character: " << endl;

	cin >> user_symbol;

	if ((user_symbol >= 'A' && user_symbol <= 'Z') || 
		(user_symbol >= 'a' && user_symbol <= 'z')) {
		cout << "You entered the letter";
		return 0;
	}

	else if (user_symbol >= '0' && user_symbol <= '9') {
		cout << "You entered a number!";
		return 0;
	}

	cout << "You have entered a sign";
	return 0;
}
