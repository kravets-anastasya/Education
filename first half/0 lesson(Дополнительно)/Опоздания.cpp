#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    while (true) {
        int string, fine, salary, menu;
        cout << "1 - пользователь вводит желаемый доход Васи и количество опозданий,"
            "\n\tпосчитать, сколько строк кода ему надо написать" << endl;
        cout << "2 - пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты. "
            "\n\tПосчитать, сколько раз Вася может опоздать" << endl;
        cout << "3 - пользователь вводит количество строк кода и количество опозданий, определить, "
            "\n\tсколько денег заплатят Васе и заплатят ли вообще." << endl;
        cin >> menu;
        switch (menu) {
        case 1: {
            cout << "вы в 1 меню вам надо:" << endl;
            cout << "желаемый доход Васи - 1300$, количество опозданий - 9" << endl;
            cin >> salary >> fine;
            string = ((salary - ((fine / 3) * 20)) / 50) * 100;
            cout << "нужно написать " << string << " строк кода" << endl;
        }
              break;
        case 2: {
            cout << "вы в 2 меню вам надо:" << endl;
            cout << "количество строк кода, написанное Васей - 3600, желаемый объем зарплаты - 1300$" << endl;
            cin >> string >> salary;
            string = (string / 100) * 50;
            if (salary > string) {
                salary = ((salary - string) / 50) * 100;
                cout << "Васе надо дописать " << salary << " строк кода чтоб получить бажаную зп" << endl;
                cout << "Васе опоздать можна 2 раза, а 3 раз пойдет в -$ к зарплате" << endl;
            }
            else
                cout << "Вася думай чо пишеш )" << endl;
        }
              break;
        case 3: {
            cout << "вы в 3 меню вам надо:" << endl;
            cout << "количество строк кода - 4600, количество опозданий - 3" << endl;
            cin >> string >> fine;
            //
            salary = ((string / 100) * 50) - ((fine / 3) * 20);
            (salary >= 0) ? cout << salary << "$ Вася заработал\n" : cout << salary << "$ Вася попал :)" << endl;
        }
              break;
        default:
            cout << "Think what you write !!!" << endl;

        }

        return 0;
    }

}