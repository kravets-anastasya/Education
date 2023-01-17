#include <iostream>
#include<time.h>
# include <stdio.h>

using namespace std;

/*1.�������� �������, �������� �� ����� �������������
� ������� N � ������� K.
2. �������� �������, ����������� ��������� �����������
�� �����.
3. �������� �������, ������� ���������, ��������� ��
���������� �� ����� �������? ����� ����������� �������,
���� ��� ������� ��� ������� ������ �� ���� � �� �������.*/

size_t rectangle(size_t width, size_t length){
	for (size_t i = 0; i < width; i++){
		for (size_t j = 0; j < length; j++){
			cout << '*';
		}
		cout << endl;
	}
	return (width, length);
}

void choosing_actions(){
	cout << R"(Choose what action you want to perform: 
	1. Draw a rectangle?
	2. Calculate the factorial?
	3. Is the number prime?)";
	cout << endl << endl;
}

float calculating_the_factorial(float max) {
	float namber{1};
	for (size_t i = 1; i <= max; i++){
		namber *= i;
	}
	return namber;
}

bool checking_for_a_prime_number(char number) {
	for (size_t i = 2; i < number; i++){
		size_t temporary{};
		if ((number % i)==0) {
			return 1;
		}
	}
	if ((number % number)==0) {
		if ((number % 1) == 0) {
			return 0;
		}
	}
}

int main() {
	
	size_t selecting_a_function{};
	size_t length{};
	size_t width{};
	size_t namber{};

	choosing_actions();
	cin >> selecting_a_function;
	if(selecting_a_function==1){
	/*1.�������� �������, �������� �� ����� �������������
		� ������� N � ������� K.*/

		cout << "Enter the length of the rectangle: ";
	cin >> length;

	cout << "Enter the width of the rectangle: ";
	cin >> width;

	cout << "Result: " << endl << endl;
	rectangle(width, length);
	}
	if (selecting_a_function == 2) {
		/*2. �������� �������, ����������� ��������� �����������
	�� �����.*/

		cout << endl << "Select the number that the factorial will be calculated for: ";
		cin >> namber;

		cout << "Result: ";
		cout << calculating_the_factorial(namber) << endl;
	}
	if (selecting_a_function == 3) {
		/*3. �������� �������, ������� ���������, ��������� ��
			���������� �� ����� ������� ? ����� ����������� �������,
			���� ��� ������� ��� ������� ������ �� ���� � �� �������.*/

		cout << endl << "Enter a number to check: ";
		cin >> namber;

		if (checking_for_a_prime_number(namber) == 0) {
			cout << endl << "The number is prime!" << endl;
		}
		if (checking_for_a_prime_number(namber) == 1) {
			cout << endl << "The number is not prime!" << endl;
		}
	}
	if (selecting_a_function > 3) {
		system("color 40");
		cout << endl << "You entered an incorrect number!" << endl;
		return 1;
	}


	return 0;
}