//Кравец Анастасия Сергеевна
//Вывести на экран все числа от нуля до введенного пользователем числа.
#include <iostream>
using namespace std;
int main() {
    int namber{};
    int counter{};
    
    cout << "Enter some number: ";
    cin >> namber;
    while (counter <= namber){
        cout << "Number: " << counter << endl;
        counter++;
    }

    return 0;
}