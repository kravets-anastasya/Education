//������ ��������� ���������
/*������� �� ����� ������, ����������� �����������.
������ � ������������� ����������� ��� ������ ����.*/

#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	short menu;
	short size;
	short exit;
	do {
		cout << R"(�������� ����� ������� �� ������ ����������:
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
		cout << "�������� ������ ��������: " ;
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

		
			cout << "������ ��������� ���������, ����� ������� ������? 0 - ��.";
			cin >> exit;
			system("cls");
		
	}while (exit == 0);
	cout << "��������� ���������. ����� �������!";
	return 0;
}