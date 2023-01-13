//Кравец Анастасия Сергеевна
//Посчитать сумму всех чисел от нуля до введенного пользователем числа.
#include <iostream>
using namespace std;
int main() {
    int namber{};
    int counter{};
    int summ{};
    cout << "Enter some number: ";
    cin >> namber;
    while (counter <= namber) {
        summ = summ + counter;
        counter++;
    }
    cout << "Summ: " << summ << endl;
    return 0;
}