// ������ ��������� ���������
/*������������ ������ ������ � ����� �������� � ������ �� ������ (������ ����). 
�������� ���������, ������� ���������:
- ������� (�� ������) ����������� �����;
- ����� �����, ����������� ������������� �� ������;
- ���������� ���� � �� �������� (��������, ��������), ����� ����� ������� (� ����) ��������� 1000 ������.
*/

#include <iostream>
#include <clocale>

using namespace std;
void InputValue (int expenses[], int size) {
	cout << "������� �������� " << endl;
	for (size_t i = 0; i < size; i++) {
		cout << i + 1 << ": ";
		cin >> expenses[i];
	}
}
int Summa(int expenses[], int size) {
	int summa = 0;
	for (size_t i = 0; i < size; i++) {
		summa += expenses[i];
	}
	return summa;
}
int NumberOfDays(int expenses[], int size, int exceeded) {
	int number_of_days = 0;
	for (size_t i = 0; i < size; i++){
		if (expenses[i] > exceeded) {
			number_of_days++;
		}
	}
	return number_of_days;
}
int main() {
	setlocale(LC_ALL, "Russian");

	const short SIZE = 7;
	const short EXCEEDED = 1000;
	int expenses[SIZE];

	InputValue(expenses, SIZE);

	int summa = Summa(expenses, SIZE);
	int average_value = summa / SIZE;
	int number_of_days = NumberOfDays(expenses, SIZE, EXCEEDED);

	cout << "������� ����� ����������� �� ������: " << average_value << endl;
	cout << "����� �����, ����������� �� ������: " << summa << endl;
	cout << "���������� ���� ����� ����� ������� � ����, ��������� 1000 ������: " << number_of_days << endl;
	for (size_t i = 0; i < SIZE; i++){
		if (expenses[i] > EXCEEDED) {
			switch (i) {
			case 0:
				cout << "�����������: " << expenses[i] << endl;
				break;
			case 1:
				cout << "�������: " << expenses[i] << endl;
				break;
			case 2:
				cout << "�����: " << expenses[i] << endl;
				break;
			case 3:
				cout << "�������: " << expenses[i] << endl;
				break;
			case 4:
				cout << "�������: " << expenses[i] << endl;
				break;
			case 5:
				cout << "�������: " << expenses[i] << endl;
				break;
			case 6:
				cout << "�����������: " << expenses[i] << endl;
				break;
			}
		}
	}

	return 0;
}
