#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*������������ ������ ����� ����� ����� A. ��������� ������
	����������, ��� ��� ����� ���� ����� ����� ����� �*�.*/
	size_t a = {};
	size_t  sum = {};

	cout << R"(Enter any number that you want:)" << endl;
	cin >> a;
		
	for (int b = a; b > 0; b /= 10){
		sum += b % 10;
	}

	if (sum * sum * sum == a * a) cout << "Podhodit" << endl;

	else cout << "Ne podhodit" << endl;

	return 0;
}