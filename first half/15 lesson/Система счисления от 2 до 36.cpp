#include <iostream>

using namespace std;

void the_system_of_calculation(size_t number, int array[], size_t counting, size_t system);

int main() {
    /*Написать функцию, которая получает в качестве
    аргументов целое положительное число и систему
    счисления, в которую это число должно переводиться
    (системы счисления от 2 до 36). Например, при
    переводе числа 27 в систему счисления 16 должно
    получиться 1В; 13 в 5-ю -- 23; 35 в 18-ю -- 1Н.*/

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
