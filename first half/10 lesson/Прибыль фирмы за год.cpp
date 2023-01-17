#include <iostream>
# include <stdio.h>


using namespace std;

int main() {
    /*������������ ������ ������� ����� �� ��� (12 �������).
����� ������������ ������ �������� (��������, 3 � 6 � �����
����� 3-� � 6-� �������). ���������� ���������� �����,
� ������� ������� ���� ����������� � �����, � �������
������� ���� ���������� � ������ ���������� ���������.*/

    const size_t months_per_year{ 12 };
    int min_months{};
    int max_months{};
    int array[months_per_year];
    size_t profit_for_the_year{};
    

    cout << "Enter a range of months:" << endl;

    for (int i = 0; i < months_per_year; i++){
        cout << '\t' << i + 1 << ' ' << "month: ";
        cin >> array[i];
    }

    for (int i = 0; i < months_per_year; i++){
        profit_for_the_year += array[i];
    }

    cout << endl << "Profit for the year: " << profit_for_the_year << endl << endl;
    
    system("pause");
    system("cls");

    cout << "Enter the range in which you want to find the minimum and maximum values:" << endl;

    cout << "\tMin months (from): ";
    cin >> min_months;

    cout << "\tMax months (up to): ";
    cin >> max_months;

    /*���������� ���������� �����,
� ������� ������� ���� ����������� � �����, � �������
������� ���� ���������� � ������ ���������� ���������*/

    int min_profit = array[min_months - 1];
    int max_profit = array[max_months - 1];

    for (int i = min_months - 1; i < max_months; i++) {
        if (array[i] > max_profit) {
            max_profit = array[i];
        }

        if (array[i] < min_profit) {
            min_profit = array[i];
        }
    }

    system("cls");
    
    cout << "\tMin profit: " << min_profit << endl;
    cout << "\tMax profit: " << max_profit << endl;

    return 0;
}