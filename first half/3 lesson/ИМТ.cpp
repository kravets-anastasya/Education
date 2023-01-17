#include <iostream>

using namespace std;



int main() {
	/*Пользователь задаёт свой рост и вес. Программа сообщает
	 пользователю, находиться ли его индекс массы тела (ИМТ)
	в норме. За норму взять диапазон ИМТ 18.50 - 24.99.*/

	size_t weight {}; // вес
	float height {}; // рост

	cout << "Enter your weight (kg):" << endl;
	cin >> weight;

	cout << "Enter your height (m):" << endl;
	cin >> height;

	float growth_squared = (height * height);
	
	cout << growth_squared << endl;

	float body_norm = weight / growth_squared;

	cout << body_norm << endl;

	if (body_norm < 18.50) {

		cout << "Your body norm is below the required: " << body_norm << endl;
		return 0;
	}
	 else if (body_norm > 24.99) {

		cout << "Your body norm is higher than necessary: " << body_norm << endl;
		return 0;
	}
	 else {
	cout << "Your body rate is normal: " << body_norm << endl;
	}
	
	return 0;
}
