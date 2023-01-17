#include <iostream>

using namespace std;

int main(){

    srand(time(NULL));

    const int rows = 7;
    const int columns = 10;

    int array[rows][columns]{};

    int tmp{};
    int top{}, bottom{};

    //Заполнение и вывод исходных элементов
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = rand() % 20 + 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }

    //для каждой строки массива проверяем условие (четная/нечетная)
    //и выполняем сортировку
    for (int i = 0; i < rows; i++) {
        if ((i+1) % 2) {
            //нечетные

            //обнуляем значения границ для работы с новой строкой
            top = columns - 1;
            bottom = 1;

            do {
                // нисходящий цикл (перемещаем легкие справа налево)
                for (int j = top; j >= bottom; j--) {
                    if (array[i][j-1] > array[i][j]) {
                        //если слева значение > чем справа, меняем местами
                        //таким образом, меньшее сдвинулось влево
                        tmp = array[i][j - 1];
                        array[i][j - 1] = array[i][j];
                        array[i][j] = tmp;
                    }
                }
                bottom++;

                // восходящий цикл (перемещаем тяжелые слева направо)
                for (int j = bottom; j <= top; j++) {
                    if (array[i][j - 1] > array[i][j]) {
                        //если слева значение > чем справа, меняем местами
                        //таким образом, тяжелое сдвинулось вправо
                        tmp = array[i][j - 1];
                        array[i][j - 1] = array[i][j];
                        array[i][j] = tmp;
                    }
                }
                top--;

            } while(bottom <= top);

        }
        else {
            //четные
            top = columns - 1;
            bottom = 1;

            do {
                // нисходящий цикл (перемещаем тяжелые справа налево)
                for (int j = top; j >= bottom; j--) {
                    if (array[i][j - 1] < array[i][j]) {
                        //если слева значение < чем справа, меняем местами
                        //таким образом, большее сдвинулось влево
                        tmp = array[i][j - 1];
                        array[i][j - 1] = array[i][j];
                        array[i][j] = tmp;
                    }
                }
                for (int j = top; j >= bottom; j--) {
                    if (array[i][j-1] > array[i][j]) {
                        //если слева значение > чем справа, меняем местами
                        //таким образом, меньшее сдвинулось влево
                        tmp = array[i][j - 1];
                        array[i][j - 1] = array[i][j];
                        array[i][j] = tmp;
                    }
                }
                bottom++;

                // восходящий цикл (перемещаем легкие слева направо)
                for (int j = bottom; j <= top; j++) {
                    if (array[i][j - 1] < array[i][j]) {
                        //если слева значение < чем справа, меняем местами
                        //таким образом, легкое сдвинулось вправо
                        tmp = array[i][j - 1];
                        array[i][j - 1] = array[i][j];
                        array[i][j] = tmp;
                    }
                }
                top--;

            } while (bottom <= top);
        }
      
    }

    cout << endl;
    cout << "Result: " << endl << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }

    cout << endl; return 0;
}

