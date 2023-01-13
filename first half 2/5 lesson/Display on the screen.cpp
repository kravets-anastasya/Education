//Кравец Анастасия Сергеевна
/*Вывести на экран:
■ вывести все четные числа от нуля до введенного пользователем числа.
■ вывести все нечетные числа от нуля до введенного пользователем числа.
■ вывести все от нуля до введенного пользователем числа, кратные семи.
Одна программа (три цикла в одной программе). БЕЗ МЕНЮ!*/
#include <iostream>
using namespace std;
int main() {
    int namber{}; //числа
    int counter{};//счётчик
    int Choice{};//ВЫБОР
    do{
        cout << "Enter some number: ";
        cin >> namber;
       
        cout << "All even numbers from zero to the number entered by the user: " << endl << endl;

        while (counter <= namber) {
            cout << "Even numbers: " << counter << endl;
            counter = counter + 2;
        }
        cout << endl << endl;
        counter = 1;
        while (counter <= namber) {
            cout << "Odd numbers: " << counter << endl;
            counter = counter + 2;
        }
        cout << endl << endl;
        counter = 1;
        if (namber < 7) {
            cout << "There are no multiples of 7!" << endl << endl;
        }else{
            while (counter <= namber) {
                if(counter % 7 == 0){
                cout << "Multiples of seven: " << counter << endl;
                }
                counter ++;
            }
        }
        system("pause");
        system("cls");
        cout << R"(Repeat the input?
            1 - yes;
            Other - No)" << endl;
        cin >> Choice;
        system("cls");
    } while (Choice == 1);
    system("color 70");
    cout << R"(     The program is completed! 

            Goodbye.
    )" << endl;
    return 0;
}