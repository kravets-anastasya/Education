#include <iostream>
#include <string>


using namespace std;

int main() {

	/*�������� �������, ������� ������� �� ������
	������ � �������� �������*/

	
	int number_of_the_deletion_number = {}; //����� ����� ��������
	int number_of_numbers = {}; //���������� �����
	const int size = { 100 }; //������������ ���������� ����� � �������
	string s;
	
	do{
		cout << "Enter the number of numbers in the line but not more than 100" << endl;
	cin >> number_of_numbers;

	cout << "Enter the number of the number you want to delete, no more than 100" << endl;
	cin >> number_of_the_deletion_number;

	} 
	while (number_of_the_deletion_number > number_of_numbers);

	int array[size] = {}; //�������

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