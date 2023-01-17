#include <iostream>
#include<time.h>
# include <stdio.h>

using namespace std;

enum direction {
	DIRECTION_LEFT = 1, //влево
	DIRECTION_RIGHT = 2, //вправо
	DIRECTION_UP = 3, //вверх
	DIRECTION_DOWN = 4, //вниз
};
int main() {
	/*Создайте двухмерный массив. Заполните его
	случайными числами и покажите на экран. Пользователь
	выбирает количество сдвигов и положение (влево, вправо,
	вверх, вниз). Выполнить сдвиг массива и показать на 
	экран полученный результат. Сдвиг циклический.
	Например, если мы имеем сдвигающий сдвигающий массив
				1 2 0 4 5 3
				4 5 3 9 0 1 
	и пользователь выбрал сдвиг на 2 разряда вправо, то мы
	получим
				5 3 1 2 0 4
				0 1 4 5 3 9.*/

	const int maximum_column{ 6 };
	const int maximum_lines{ 4 };
	int two_dimensional_array[maximum_lines][maximum_column];
	int number_of_shifts{  };
	int position{};
	int exchange{};
	
	system("color 70");
	cout << "Select the number of shiftsand the position(left, right, up, down)." << endl;
	cout << endl << "Select the number of shifts: ";
	cin >> number_of_shifts;
	
	int division_by_modulus_column = number_of_shifts % maximum_column;
	int division_by_modulus_lines = number_of_shifts % maximum_lines;
	system("pause");
	system("cls");

	do {
		cout << "Select the number of shiftsand the position(left, right, up, down)." << endl;
		cout << R"(Select a position(left, right, up, down):
		1: left;
		2: right;
		3: up;
		4: down;
namber: )";
	cin >> position;

		if (position > 4) {
			cout << endl << "You entered the wrong number" << endl << endl;
			system("color 40");
		}
	} while (position > 4);
	
	system("pause");
	system("cls");

	cout << "Initial: " << endl;

	srand(time(NULL));
	for (int i = 0; i < maximum_lines; i++) {
		for (int j = 0; j < maximum_column; j++) {
			two_dimensional_array[i][j] = rand();
			cout << '\t' << two_dimensional_array[i][j] << '\t';
		}
		cout << endl << endl;
	}
	cout << endl << "Result: " << endl;

	switch (position) {
	case direction::DIRECTION_LEFT:
		for (int i = 0; i < division_by_modulus_column; i++) {
			for (int j = 0; j < maximum_lines; j++) {
				exchange = two_dimensional_array[j][0];
				for (int g = 0; g < maximum_column - 1; g++){
					two_dimensional_array[j][g] = two_dimensional_array[j][g + 1];
				two_dimensional_array[j][maximum_column - 1] = exchange;
				}
			}
		}
		for (int i = 0; i < maximum_lines; i++) {
			for (int j = 0; j < maximum_column; j++)
				cout << '\t' << two_dimensional_array[i][j] << '\t';
			cout << endl << endl;
		}
		system("color 75");
		break;

	case DIRECTION_RIGHT:
		for (size_t i = 0; i < division_by_modulus_column; i++){
			int last_column[maximum_lines]{};
			for (size_t k = 0; k < maximum_lines; k++){
				last_column[k] = two_dimensional_array[k][maximum_column - 1];
			}
			for (size_t j = 0; j < maximum_column; j++){
				for (int g = maximum_column-1; g > 0; g--) {
					two_dimensional_array[j][g] = two_dimensional_array[j][g - 1];
				}
			}
			for (size_t l = 0; l < maximum_lines; l++){
				two_dimensional_array[l][0] = last_column[l];
			}

		}
		for (int i = 0; i < maximum_lines; i++) {
			for (int j = 0; j < maximum_column; j++)
				cout << '\t' << two_dimensional_array[i][j] << '\t';
			cout << endl << endl;
		}
		system("color 71");
		break;
		
	case DIRECTION_UP:
		for (int i = 0; i < division_by_modulus_lines; i++){
			for (int j = 0; j < division_by_modulus_lines; j++){
				for (int l = 0; l < maximum_column; l++){
					exchange = two_dimensional_array[j][l];
					two_dimensional_array[j][l] = two_dimensional_array[j + 1][l];
					two_dimensional_array[j + 1][l] = exchange;
				}
			}
		}
		for (int i = 0; i < maximum_lines; i++) {
			for (int j = 0; j < maximum_column; j++)
				cout << '\t' << two_dimensional_array[i][j] << '\t';
			cout << endl << endl;
		}
		system("color 72");
		break;
		
	case DIRECTION_DOWN:
		for (int i = 0; i < division_by_modulus_lines; i++) {
			for (int j = maximum_lines - 1; j > 0; j--) {
				for (int l = 0; l < maximum_column; l++) {
					exchange = two_dimensional_array[j][l];
					two_dimensional_array[j][l] = two_dimensional_array[j - 1][l];
					two_dimensional_array[j - 1][l] = exchange;
				}
			}
		}
		for (int i = 0; i < maximum_lines; i++) {
			for (int j = 0; j < maximum_column; j++)
				cout << '\t' << two_dimensional_array[i][j] << '\t';
			cout << endl << endl;
		}
		system("color 73");
		break;
	}

	cout << endl <<"Thank you for using the program!" << endl;

	return 0;
}
