// ������ ��������� ���������
/*�������� ��������� ���������� 200$ + ������� �� ������,
������� �� 500$ � 3%, �� 500 �� 1000 � 5%, ����� 1000 �
8%. ������������ ������ � ���������� ������� ������
��� ���� ����������. ���������� �� ��������, ����������
������� ���������, ��������� ��� ������ 200$, �������
����� �� �����.
����������: ������� ������ � ���� ���� ����������
������.*/

#include <iostream>
#include <clocale>

using namespace std;

enum PERCENTAGE_OF_SALES {
	PERCENT_AE_500 = 3,
	PERCENT_FROM_500_AE_1000 = 5,
	PERCENT_FROM_1000 = 8
};

int main() {
	setlocale(LC_ALL, "Russian");
	const size_t SALARY = 200; 
	const size_t NUMBER_OF_MANAGERS = 3;
	const size_t PRIZE = 200;

	float sales_level[NUMBER_OF_MANAGERS];
	size_t max = 0; 
	float salary_amount[NUMBER_OF_MANAGERS];
	float discount; 

	cout << "������� ������� ������ ��� " << NUMBER_OF_MANAGERS << " ����������: " << endl;
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++) {
		cout << i + 1 << " ���������: ";
		cin >> sales_level[i];
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		if (max < sales_level[i]) {
			max = sales_level[i];
			continue;
		} 
		if (sales_level[i] == max) {
			cout << i + 1 << " �������� ����� ����� �� ����� ��� � " << i << " ��������" << endl;
			continue;
		}
	}
	
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		discount = 0;
		if (sales_level[i] < 500) {
			discount = (sales_level[i] * (float)PERCENT_AE_500) / 100;
			salary_amount[i] = discount + SALARY;
		}else if (sales_level[i] >= 500 && sales_level[i] <= 1000) {
			discount = (sales_level[i] * (float)PERCENT_FROM_500_AE_1000) / 100;
			salary_amount[i] = discount + SALARY;
		}
		else if (sales_level[i] > 1000) {
			discount = (sales_level[i] * (float)PERCENT_FROM_1000) / 100;
			salary_amount[i] = discount + SALARY;
		}
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		if (sales_level[i] == max) {
			salary_amount[i] += PRIZE;
			cout << "������ �������� �����: " << i + 1 << endl;
		}
	}
	for (size_t i = 0; i < NUMBER_OF_MANAGERS; i++){
		cout << "�������� " << i + 1 << " ��������� ����������: " << salary_amount[i] << "$" << endl;
	}

	return 0;
}
