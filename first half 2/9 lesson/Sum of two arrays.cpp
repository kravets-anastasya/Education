// ������ ��������� ���������
/*�������� ���������, ������� ��������� ������������ ����� ���� �������� � ��������� ������� � ������ ������.
�������� �������� ����� ������������� � ������������ ���������.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

void Summ (int array_3[], int array_2[], int array_1[], int size){
	for (size_t i = 0; i < size; i++){
		array_3[i] = array_1[i] + array_2[i];
	}
}
void �onclusion(int array[], int size) {
	cout << "{";
	for (size_t i = 0; i < size; i++){
		cout << array[i] << ", ";

	}
	cout << "}" << endl;
}
void NumberGenerator(int array[], int size) {
	for (size_t i = 0; i < size; i++){
		for (size_t i = 0; i < size; i++) {
			array[i] = rand();
		}
	}

}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	const size_t SIZE = 5;
	int array_1[SIZE];
	int array_2[SIZE];
	int array_3[SIZE];

	NumberGenerator(array_1, SIZE);
	cout << "������ 1: ";
	�onclusion(array_1, SIZE);
	NumberGenerator(array_2, SIZE);
	cout << "������ 2: ";
	�onclusion(array_2, SIZE);
	Summ(array_3, array_2, array_1, SIZE);
	cout << "������ 3 � ���� ����� ���� ��������: ";
	�onclusion(array_3, SIZE);
	
	return 0;
}
