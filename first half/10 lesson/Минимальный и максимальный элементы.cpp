#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
    /*В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/

    const int number_of_numbers{ 20 };
    int array[number_of_numbers];

    srand(time(NULL));
    
    for (int i = 0; i < number_of_numbers; i++) {
        array[i] = rand();
        cout << i+1 << ": " << array[i] << endl;
    }

    int max = array[0];
    int min = array[0];

    system("pause");

    for (int i = 0; i < number_of_numbers; i++)
    {
        if (array[i] > max){
            max = array[i];
        }
        if (array[i] < min){
            min = array[i];
        }
    }

    system("cls");

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}