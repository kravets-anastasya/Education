#include <iostream>
#include <time.h> 

using namespace std;
const size_t days_a_week {7};

int main() {
	/*������������ ������ ������ � ����� �������� � �������� �� ������ (������ ����). �������� ���������, �������
���������:
 -������� (�� ������) ����������� �����;
 -����� �����, ����������� ������������� �� ������;
- ���������� ���� � �� �������� (��������, ��������),
  ����� ����� ������� (� ����) ��������� 100 ��������. */
	size_t expenditure{};
	size_t summa{};
	int days[days_a_week] = {};


	cout << "Enter data about your expenses in dollars for the week (every day): " << endl;

	for (size_t i = 0; i < days_a_week; i++)
	{
		
		cout << "Enter the expense for the " << i+1 << " day:" << endl ;
		cin >> days[i];

		
		summa += days[i];
	}

	system("cls");

	for (size_t i = 0; i < days_a_week; i++)
	{
		if (days[i] >= 200) {
			cout << "\t\t\tYour expense exceeded $ 200 per " << i+1 << " day" << endl;
		}
		
		cout << "\t\t\tConsumption per " << i+1 << " day: " << days[i] << endl << endl ;
		
	}
	cout << endl << "Total expenditure for the week: " << summa << endl;
	cout << "Average weekly consumption: " << summa / days_a_week << endl;
	
	return 0;
}