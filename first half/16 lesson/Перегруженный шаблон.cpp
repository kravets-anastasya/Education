#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template<typename T>
T equations(T a, T b) { // �������� ��������� (� * � + b = 0)
	if(a!=0){
		T x{ b / a };
		return x;
	}
	cout << "Incorrect number entered!" << endl;
}

template<typename T>
T equations(T a, T b, T c) { // ���������� ��������� (a * x2 + b * x + c = 0)  d = b2 � 4ac.
	if (a != 0) {
		T x{};
		x = (b * b - 4 * a * c); 
		return x;
	}
	cout << "Incorrect number entered!" << endl;
}

int main() {
	/*2. �������� ������������� ������� ������� ���
	���������� ������ ���������(� * � + b = 0) �
	�����������(a * x2 + b * x + c = 0) ���������.���������:
	� ������� ����������� ������������ ���������.*/

	float a{};
	float b{};
	float c{};

	cout << "Enter: " << endl;
	cout << "1.a: ";
	cin >> a;
	cout << "2.b: ";
	cin >> b;
	cout << "3.c: ";
	cin >> c;

	cout << "The result of a linear equation: " << equations(a, b) << endl;

	cout << "The result of the quadratic equation: " << equations(a, b, c) << endl;

	return 0;
}