#include <iostream>

using namespace std;

int main() {
/*�������� ���������, ������� ����������� ��� ����� �����
x � y, ����� ���� ��������� � ������� �������� x � ������� y.*/

	int x{};
	int y{};
	int sum{1};
	cout << "Enter two numbers X and Y, after which the program calculates and outputs the value of X to the power of Y." << endl;
	cout << "X: " << endl;
	cin >> x;
	cout << "Y: " << endl;
	cin >> y;

	system("cls");

	for (int i = 0; i < y; i++)
	{
		sum *= x;
	
	}
	cout << "Your number is equal to: " << sum << endl;
	return 0;
}