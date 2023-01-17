#include <iostream>
# include <stdio.h>
#include<time.h>


using namespace std;

int main() {
   /*В одномерном массиве, заполненном случайными числами
в заданном пользователем диапазоне, найти сумму элементов,
значения которых меньше указанного пользователем.*/

    const int the_number_of_random_numbers{ 20 };
    int array[the_number_of_random_numbers];
    int sum = {};
    int min_range = {};

    cout << "Enter the minimum value: " << endl;
    cin >> min_range;

    //srand(time(NULL));

    for (int i = 0; i < the_number_of_random_numbers; i++) {
        array[i] = rand();
        cout << i + 1 << ": " << array[i] << endl;
    }

    for (int i = 0; i < the_number_of_random_numbers; i++) {
        if (array[i] < min_range) {
            sum += array[i];
        }

    }

    cout << "Summa: " << sum << endl;

    return 0;
}
