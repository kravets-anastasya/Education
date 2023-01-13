//Кравец Анастасия Сергеевна
/*Вывести на экран фигуры, заполненные звездочками.
Диалог с пользователем реализовать при помощи меню.*/

#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	short menu;
	short size;
	short exit;
	do {
		cout << R"(Âûáåðåòå êàêîé êâàäðàò âû õîòèòå íàðèñîâàòü:
	1. =++++	2. +====	3.+++++		4. =====	5.+++++
	   ==+++	   ++===	  =+++=		   ==+==	  =+++=
	   ===++	   +++==	  ==+==		   =+++=	  ==+==
	   ====+	   ++++=	  =====		   +++++	  ==+==
									  =+++=
									  +++++

	6.+===+		7. +====	8.====+		9. +++++	0.=====
	  ++=++		   ++===	  ===++		   ++++=	  ====+
	  +++++		   +++==	  ==+++		   +++==	  ===++
	  ++=++		   ++===	  ===++		   ++===	  ==+++
	  +===+		   +====	  ====+		   +====	  =++++)" << endl;
		cin >> menu;
		cout << "Âûáåðåòå ðàçìåð êâàäðàòà: " ;
		cin >> size;
		if (menu == 1) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j < size; j++) {
					if (i < j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 2) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j < size; j++) {
					if (i > j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 3) {
			for (size_t i = 0; i <= size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if (i + j < size - 1 && i < j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 4) {
			for (size_t i = 0; i <= size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if (i + j > size - 1 && i > j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 5) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if ((i + j > size - 1 && i > j) ||
						(i + j < size - 1 && i < j)) {
						cout << "*";
					}
					else if (i == j || i + j == size - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 6) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if ((i + j < size - 1 && i + 1 >= j) ||
						(i + j > size - 1 && i < j)) {
						cout << "*";
					}
					else if (i + j == size - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 7) {
			for (size_t i = 0; i <= size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if (i + j < size - 1 && i > j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 8) {
			for (size_t i = 0; i <= size; i++) {
				for (size_t j = 0; j <= size; j++) {
					if (i + j > size - 1 && i < j) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 9) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j < size; j++) {
					if (i + j < size - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		if (menu == 0) {
			for (size_t i = 0; i < size; i++) {
				for (size_t j = 0; j < size; j++) {
					if (i + j > size - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		
			cout << "Õîòèòå ïîâòîðèòü ïðîãðàììó, îòâåò ââåäèòå öèôðîé? 0 - äà.";
			cin >> exit;
			system("cls");
		
	}while (exit == 0);
	cout << "Ïðîãðàììà çàâåðøåíà. Âñåãî äîáðîãî!";
	return 0;
}
