#include <iostream>

using namespace std;

void the_system_of_calculation(size_t number, int array[], size_t counting, size_t system);

int main() {
    /*�������� �������, ������� �������� � ��������
    ���������� ����� ������������� ����� � �������
    ���������, � ������� ��� ����� ������ ������������
    (������� ��������� �� 2 �� 36). ��������, ���
    �������� ����� 27 � ������� ��������� 16 ������
    ���������� 1�; 13 � 5-� -- 23; 35 � 18-� -- 1�.*/

    size_t number{27};
    size_t systema{16};
    size_t i{  };
    int ost{};
    int array[16];
    
    system("color 70");

    while (number > 0) {
        ost = number % systema;
        array[i] = ost;
        cout << array[i] << ' ';
        i++;
        number /= systema;
    }
    cout << endl;

    for (int j = i - 1; j >= 0; j--) {
        cout << array[j] << ' ';
    }
    cout << endl;

    cout << "The result of the calculation: ";
   // the_system_of_calculation(number, ost, array, counting, systema);

	return 0;
}

void the_system_of_calculation(size_t number, int ost,  int array[], size_t i, size_t system) {

    while (number > 0) {
        ost = number % system;
        array[i++] = ost;
        cout << array[i];
        number /= system;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << array[j] << ' ';
    }
    cout << endl;
}