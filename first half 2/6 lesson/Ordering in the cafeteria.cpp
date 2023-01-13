//Кравец Анастасия Сергеевна
/*Реализовать программу расчета заказа в кафетерии при условии, 
что заказ может быть на несколько человек и каждый клиент формирует 
свою часть заказа. Необходимо спросить у пользователя на сколько человек заказ. 
Далее каждому человеку выводиться меню (названия напитков, кондитерских изделий 
и их цена) и он выбирает. Предусмотреть возможность выбора нескольких элементов 
меню для клиента, если он желает добавить еще что-то в свой заказ. Результат 
работы программы — итоговая сумма общего заказа всей компании.*/
#include <iostream>
#include <clocale>

using namespace std;
enum eMenu {
	GYROS = 300,
	BURGER = 200,
	TWISTER = 250,
	COLA = 100,
	JUICE = 80,
	TEA = 50,
	DONUT = 50,
	FANDAN = 70,
	TIRAMISU = 120
};

int main() {
	setlocale(LC_ALL, "Russian");
	short choice;
	short menu;
	short j = 1;
	short k = 1;
	short number_of_people;
	size_t amount_of_1_person; //сумма на 1 человека
	size_t summa = 0; //общая сумма

	do {
		cout << "Введите количество гостей: " << endl;
		cin >> number_of_people;
		if (number_of_people <= 0) {
			cout << "Вы ввели неверное количество гостей. Попробуйте попытку снова." << endl;
		}
	} while (number_of_people <= 0);
	
	for (size_t i = 0; i < number_of_people; i++){
		choice = 0;
		amount_of_1_person = 0;

		do {
			cout << R"(Здраствуйте, вот наше меню для выбора:
			1.Гирос - 300 р.;
			2.Бургер - 200 р.;
			3.Твистер - 250 р.;
			4.Кола - 100 р.;
			5.Сок - 80 р.;
			6.Чай - 50 р.;
			7.Пончик - 50 р.;
			8.Фандан - 70 р.;
			9.Тирамису - 120 р..)" << endl;
			cout << "Выберете номер меню и если не хотите выбрать что то ещё нажмите \'0\'" << endl;	
			cin >> menu;
			if (menu < 0 || menu > 9) {
				cout << "Вы ввели неверный пункт меню. Попробуйте снова." << endl;
			}else if (menu == 0) { 
				cout << "На этом ваш выбор окончен." << endl;
				choice = 1; 
			}
			else {
				cout << "Вы выбрали: " << j++ << ". пункт - " << menu << endl;
				if (menu == 1) {
					amount_of_1_person += GYROS;
				}
				else if (menu == 2) {
					amount_of_1_person += BURGER;
				}
				else if (menu == 3) {
					amount_of_1_person += TWISTER;
				}
				else if (menu == 4) {
					amount_of_1_person += COLA;
				}
				else if (menu == 5) {
					amount_of_1_person += JUICE;
				}
				else if (menu == 6) {
					amount_of_1_person += TEA;
				}
				else if (menu == 7) {
					amount_of_1_person += DONUT;
				}
				else if (menu == 8) {
					amount_of_1_person += FANDAN;
				}
				else if (menu == 9) {
					amount_of_1_person += TIRAMISU;
				}
			}
			system("cls");
		} while (choice == 0);
		cout << "Ваша сумма заказа на " << k++ << " человека - " << amount_of_1_person << " рублей" << endl;
		summa += amount_of_1_person;
		system("pause");
		system("cls");
	}
	cout << "Ваш заказ вышел на сумму: " << summa << " рублей" << endl;
	return 0;
}