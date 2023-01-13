//������ ��������� ���������
/*����������� ��������� ������� ������ � ��������� ��� �������, 
��� ����� ����� ���� �� ��������� ������� � ������ ������ ��������� 
���� ����� ������. ���������� �������� � ������������ �� ������� ������� �����. 
����� ������� �������� ���������� ���� (�������� ��������, ������������ ������� 
� �� ����) � �� ��������. ������������� ����������� ������ ���������� ��������� 
���� ��� �������, ���� �� ������ �������� ��� ���-�� � ���� �����. ��������� 
������ ��������� � �������� ����� ������ ������ ���� ��������.*/
#include <iostream>
#include <clocale>

using namespace std;
enum eMenu {
	GYROS = 300,
	BURGER = 200,
	TWISTER = 250,
	COLA = 100,
	JUICE = 80,
	TEA = 50,
	DONUT = 50,
	FANDAN = 70,
	TIRAMISU = 120
};

int main() {
	setlocale(LC_ALL, "Russian");
	short choice;
	short menu;
	short j = 1;
	short k = 1;
	short number_of_people;
	size_t amount_of_1_person; //����� �� 1 ��������
	size_t summa = 0; //����� �����

	do {
		cout << "������� ���������� ������: " << endl;
		cin >> number_of_people;
		if (number_of_people <= 0) {
			cout << "�� ����� �������� ���������� ������. ���������� ������� �����." << endl;
		}
	} while (number_of_people <= 0);
	
	for (size_t i = 0; i < number_of_people; i++){
		choice = 0;
		amount_of_1_person = 0;

		do {
			cout << R"(�����������, ��� ���� ���� ��� ������:
			1.����� - 300 �.;
			2.������ - 200 �.;
			3.������� - 250 �.;
			4.���� - 100 �.;
			5.��� - 80 �.;
			6.��� - 50 �.;
			7.������ - 50 �.;
			8.������ - 70 �.;
			9.�������� - 120 �..)" << endl;
			cout << "�������� ����� ���� � ���� �� ������ ������� ��� �� ��� ������� \'0\'" << endl;	
			cin >> menu;
			if (menu < 0 || menu > 9) {
				cout << "�� ����� �������� ����� ����. ���������� �����." << endl;
			}else if (menu == 0) { 
				cout << "�� ���� ��� ����� �������." << endl;
				choice = 1; 
			}
			else {
				cout << "�� �������: " << j++ << ". ����� - " << menu << endl;
				if (menu == 1) {
					amount_of_1_person += GYROS;
				}
				else if (menu == 2) {
					amount_of_1_person += BURGER;
				}
				else if (menu == 3) {
					amount_of_1_person += TWISTER;
				}
				else if (menu == 4) {
					amount_of_1_person += COLA;
				}
				else if (menu == 5) {
					amount_of_1_person += JUICE;
				}
				else if (menu == 6) {
					amount_of_1_person += TEA;
				}
				else if (menu == 7) {
					amount_of_1_person += DONUT;
				}
				else if (menu == 8) {
					amount_of_1_person += FANDAN;
				}
				else if (menu == 9) {
					amount_of_1_person += TIRAMISU;
				}
			}
			system("cls");
		} while (choice == 0);
		cout << "���� ����� ������ �� " << k++ << " �������� - " << amount_of_1_person << " ������" << endl;
		summa += amount_of_1_person;
		system("pause");
		system("cls");
	}
	cout << "��� ����� ����� �� �����: " << summa << " ������" << endl;
	return 0;
}