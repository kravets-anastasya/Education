#include <iostream>
#include <iomanip>
# include <stdio.h>

using namespace std;

int main() {
	/*������ ���������, ������� ������� ����������
	������ � ��������� ��� �� ���������� ��������:
	������������ ������ ����� (��������, 3) ������ 
	������� ������� ��������� �������� ����� �����,
	����������� ������� ������� ��������� �������� 
	����� ����� ����������� �� 2 (�.�. 6 ��� ������
	�������), ������ ������� ������� ���������� 
	������� ���������� �� 2 (�.�. 6*2=12 ��� ������ 
	�������). ��������� ������ ������� �� �����.*/

	short maximum_number{ 2 };
	short counting{1};
	
	long long array_number{};
	cout << "Enter the initial number for the string array: ";
	cin >> array_number;

	const int lines{5};
	const int column{6};
	long long two_dimensional_array[lines][column];

	system("cls");
	system("color 70");

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < column; j++) {

			two_dimensional_array[i][j] = array_number;
			array_number *= maximum_number;
			cout << setw(20) << two_dimensional_array[i][j] << '\t';
			
		}
		cout << endl;
	}
	cout << endl << "Otherwise: " << endl;

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < column; j++) {
			cout << counting << ": " << two_dimensional_array[i][j] << endl;
			counting++;
		}
	}

	return 0;
}