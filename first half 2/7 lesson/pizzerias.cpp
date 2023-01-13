// Кравец Анастасия Сергеевна
/*Написать программу, реализующую процедуры заказа и
расчета его суммы в мини — пиццерии. В меню пиццерии
предусмотрено 4 вида пиццы и три вида напитков.
Пользователю выводится меню (вначале пиццы, потом
напитки), содержащее код и название. Пользователь вводит
код желаемого продукта, после чего вводит количество единиц
данного продукта.
В пиццерии предусмотрены два вида скидок:
■ если общая сумма заказа более 50$, то размер скидки составляет 20% от суммы заказа;
■ каждая пятая пицца — в подарок;
■ для напитков с ценой более 2$, если количество в заказе более трех, то скидка 15% (только на напитки, а не на
весь заказ).
Вывести пользователю «чек» для оплаты в виде: название —
количество — цена. Итого к оплате.*/

#include <iostream>
#include <clocale>

using namespace std;

enum ePizza {
	PIZZA_PEPPERONI = 25,
	PIZZA_MARGARET = 20,
	PIZZA_FOUR_CHEESES = 32,
	PIZZA_FOUR_SEASONE = 40
};
enum eDrinks {
	DRINKS_MOJITO = 15,
	DRINKS_PEPSI = 10,
	DRINKS_TEA = 5,
};
enum eDiscounts {
	DISCOUNT = 20,
	AMOUNT_IS_HIGHER_PIZZA = 50,
	DISCOUNT_DRINKS = 15,
	AMOUNT_IS_HIGHER_DRINKS = 2
};

int main() {
	setlocale(LC_ALL, "Russian");

	short choice_of_pizza[4]{0,0,0,0};
	short choice_of_drink[3]{0,0,0};
	short quantity_of_pizza[4]{0,0,0,0};
	short quantity_of_drink[3]{0,0,0};
	size_t summa_pizza = 0;
	size_t summa_drink[3]{0,0,0};
	size_t summa_drinks = 0;
	float total_amount = 0;
	size_t multiplicity = 0;
	float cheque[7];
	
	cout << "Наше меню по пицам: " << endl;
	cout << "1. Пепперони = " << PIZZA_PEPPERONI << endl;
	cout << "2. Маргарита = " << PIZZA_MARGARET << endl;
	cout << "3. Четыре сыра = " << PIZZA_FOUR_CHEESES << endl;
	cout << "4. Четыре сезона = " << PIZZA_FOUR_SEASONE << endl;
	
	for (int i = 0; i < 4; i++) {
		cout << "Выберете пиццу по номеру или нажмите \'0\' для завешения выбора: ";
		cin >> choice_of_pizza[i];
		do {
			if (choice_of_pizza[i] > 4) {
				cout << "Вы ввели неверный номер меню, введите снова.";
				cin >> choice_of_pizza[i];
			}
			else break;
		}while (true);
		if (choice_of_pizza[i] == 0) break;
		cout << "Выберете количество порций данной пицы:";
		cin >> quantity_of_pizza[i];
		if (quantity_of_pizza[i] / 5 > 0) {
			multiplicity = quantity_of_pizza[i] / 5;
			quantity_of_pizza[i] -= multiplicity;
		};
	}
	for (int i = 0; i < 4; i++) {
		if (choice_of_pizza[i] == 0) break;
		if (choice_of_pizza[i] == 1) {
			cheque[i] = quantity_of_pizza[i] * PIZZA_PEPPERONI;
			summa_pizza += quantity_of_pizza[i] * PIZZA_PEPPERONI;
		}
		else if (choice_of_pizza[i] == 2) {
			cheque[i] = quantity_of_pizza[i] * PIZZA_MARGARET;
			summa_pizza += quantity_of_pizza[i] * PIZZA_MARGARET;
		}
		else if (choice_of_pizza[i] == 3) {
			cheque[i] = quantity_of_pizza[i] * PIZZA_FOUR_CHEESES;
			summa_pizza += quantity_of_pizza[i] * PIZZA_FOUR_CHEESES;
		}
		else if (choice_of_pizza[i] == 4) {
			cheque[i] = quantity_of_pizza[i] * PIZZA_FOUR_SEASONE;
			summa_pizza += quantity_of_pizza[i] * PIZZA_FOUR_SEASONE;
		}
	}
	cout << "Сумма заказа на пиццу равна: " << summa_pizza << "$" << endl;
	system("pausa");
	system("cls");
	cout << "Наше меню по напиткам: " << endl;
	cout << "1. Мохито = " << DRINKS_MOJITO << endl;
	cout << "2. Пепси = " << DRINKS_PEPSI << endl;
	cout << "3. Чай = " << DRINKS_TEA << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << "Выберете напиток по номеру или нажмите \'0\' для завешения выбора: ";
		cin >> choice_of_drink[i];
		do {
			if (choice_of_drink[i] > 3) {
				cout << "Вы ввели неверный номер меню, введите снова.";
				cin >> choice_of_drink[i];
			}
			else break;
		} while (true);
		if (choice_of_drink[i] == 0) break;
		cout << "Выберете количество порций данного напитка:";
		cin >> quantity_of_drink[i];
	}
	for (int i = 0; i < 3; i++){
		if (choice_of_drink[i] == 0) break;
		if (choice_of_drink[i] == 1) {
			cheque[i + 4] = quantity_of_drink[i] * DRINKS_MOJITO;
			summa_drink[i] += quantity_of_drink[i] * DRINKS_MOJITO;
			if (DRINKS_MOJITO < 2) {
				continue;
			}
		}
		else if (choice_of_drink[i] == 2) {
			cheque[i + 4] = quantity_of_drink[i] * DRINKS_PEPSI;
			summa_drink[i] += quantity_of_drink[i] * DRINKS_PEPSI;
			if (DRINKS_PEPSI < 2) {
				continue;
			}
		}
		else if (choice_of_drink[i] == 3) {
			cheque[i + 4] = quantity_of_drink[i] * DRINKS_TEA;
			summa_drink[i] += quantity_of_drink[i] * DRINKS_TEA;
			if (DRINKS_TEA < 2) {
				continue;
			}
		}
		if (quantity_of_drink[i] > 3) {
			cheque[i + 4] = (summa_drink[i] - (summa_drink[i] * ((float)DISCOUNT_DRINKS / (float)100)));
			summa_drink[i] = (summa_drink[i] - (summa_drink[i] * ((float)DISCOUNT_DRINKS / (float)100)));
		}
		summa_drinks += summa_drink[i];
	}
	cout << "Сумма заказа на напитки равна: " << summa_drinks << "$" << endl;
	total_amount = summa_drinks + summa_pizza;
	cout << "Предварительная сумма заказа равна: " << total_amount << "$" << endl;
	
	if (total_amount > AMOUNT_IS_HIGHER_PIZZA) {
		total_amount = (total_amount - (total_amount * ((float)DISCOUNT / (float)100)));
	}
	system("pausa");
	system("cls");
	cout << "\tВаш чек с учетом скидок: " << endl;
	cout << "\tНазвание	кол-во	сумма " << endl;
	for (size_t i = 0; i < 4; i++){
		if (choice_of_pizza[i] == 1) {
			cout << "\tПепперони \t "<< quantity_of_pizza[i] << "\t" << cheque[i] << "$" << endl;
		}
		else if (choice_of_pizza[i] == 2) {
			cout << "\tМаргарита \t " << quantity_of_pizza[i] << "\t" << cheque[i] << "$" << endl;
		}
		else if (choice_of_pizza[i] == 3) {
			cout << "\tЧетыре сыра \t " << quantity_of_pizza[i] << "\t" << cheque[i] << "$" << endl;
		}
		else if (choice_of_pizza[i] == 4) {
			cout << "\tЧетыре сезона \t " << quantity_of_pizza[i] << "\t" << cheque[i] << "$" << endl;
		}
	}
	for (size_t i = 0; i < 3; i++) {
		if (choice_of_drink[i] == 1) {
			cout << "\tМохито \t\t " << quantity_of_drink[i] << "\t" << cheque[i + 4] << "$" << endl;
		}
		else if (choice_of_drink[i] == 2) {
			cout << "\tПепси \t\t " << quantity_of_drink[i] << "\t" << cheque[i + 4] << "$" << endl;
		}
		else if (choice_of_drink[i] == 3) {
			cout << "\tЧай \t\t " << quantity_of_drink[i] << "\t" << cheque[i + 4] << "$" << endl;
		}
	}
	cout << endl << endl;
	cout << "Сумма заказа на пиццу равна: " << summa_pizza << "$" << endl;
	cout << "Сумма заказа на напитки равна: " << summa_drinks << "$" << endl;
	cout << "Общая сумма заказа со скидкой равна: " << total_amount << "$" << endl;
	
	return 0;
}