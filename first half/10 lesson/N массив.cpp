#include <iostream>
#include<time.h>
# include <stdio.h>

using namespace std;

int main() {
/*В одномерном массиве, состоящем из N вещественных
чисел вычислить :
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и последним отрицательными элементами.*/

	const int number_of_numbers{10};
	float array[number_of_numbers]{}; // float для вещественных чисел
	int sum{};
	int max_elements{};
	int min_elements{};
	int elements_2{};

	srand(time(NULL));
	//Запись элементов массива
	for (int i = 0; i < number_of_numbers; i++) {
		array[i] = rand() % 50 - 40;
		cout << i + 1 << ": " << array[i] << endl;
	}
	system("pause");
	system("cls");

	//Сумму отрицательных элементов.
	for (int i = 0; i < number_of_numbers; i++) {
		if (array[i] < 0) {
			sum += array[i];
			elements_2 = i;
		}
	} 

	cout << '\t' << "Summa negative ones elements: " << sum << endl << endl;

	int max = array[0];
	int min = array[0];

	//Поиск минимального и максимального элемента
	for (int i = 0; i < number_of_numbers; i++){
	
		if (array[i] > max) {
			max_elements = i;
			max = array[i];
		}
		if (array[i] < min) {
			min_elements = i;
			min = array[i];
		}
	}

	cout << '\t' << "Min elements: " << min << endl << endl;
	cout << '\t' << "Max elements: " << max << endl << endl;

	//Произведение элементов, находящихся между min и max элементами.
	sum = 1;
	if (min_elements < max_elements) {
		for (int i = min_elements; i < max_elements; i++) {
			sum *= array[i];
		}
	}
	else {
		for (int i = max_elements; i <= min_elements; i++) {
			sum *= array[i];

		}
	}
	cout << '\t' << "The product between min and max elements: " << sum << endl << endl;

	//Произведение элементов с четными номерами.
	sum = 1;
	for (int i = 1; i < number_of_numbers; i++) {
		if ((i%2) == 0) {
			sum *= array[i];
		}

	}
	cout << '\t' << "The product of elements with even numbers: " << sum << endl << endl;

	//Сумму элементов, находящихся между первым и последним отрицательными элементами
	sum = 0;
	for (int i = 0; i <= elements_2; i++) {
		if (array[i] < 0) {
			sum += array[i];
		}
	}
	cout << '\t' << "The sum of the elements that are between the firstand last negative elements: " << sum << endl << endl;

	return 0;
}