#include <iostream>
# include <stdio.h>
#include <time.h> 

using namespace std;

int main() {
	/*������������ ������ ����� ����� �����. ���������� ������� ���
	����� �����, �� ������� �������� ����� �������� ��� �������.*/
	size_t a = {};

	cout << R"(Enter any number that you want:)" << endl;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			cout << i << "\n";
	}
	return 0;
}