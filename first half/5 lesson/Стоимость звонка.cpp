#include <iostream>

using namespace std;

int main() {
	/*Написать программу подсчета стоимости 
	разговора для мобильных операторов.
	Пользователь вводит стоимость разговора
	и выбирает с какого на какой оператор
	он звонит. Вывести стоимость на экран.*/

	float talk_time {};
	short selected_character {};
	short selected_operator {};

	const float beeline_beeline = 3.2;
	const float beeline_banother_operator = 4.2;

	const float megafon_megafon = 1.85;
	const float megafon_banother_operator = 2;

	const float mts_mts = 2.5;
	const float mts_banother_operator = 3;
	
	cout << "Enter talk time: " << endl;
	cin >> talk_time;

	cout << "Choose which operator you called from:" << endl;
	cout << "1: beeline" << endl;
	cout << "2: megafon" << endl;
	cout << "3: mts " << endl;

	cin >> selected_character;

	if (selected_character == 1) {
		cout << "Choose which operator you are calling to:" << endl;
		cout << "1: beeline" << endl;
		cout << "2: megafon" << endl;
		cout << "3: mts " << endl;
		cin >> selected_operator;

		if (selected_operator == 1) {
			float the_cost_of_the_conversation = beeline_beeline * talk_time;
			cout << "The cost of the call: " << the_cost_of_the_conversation << endl;

		}
		else {
			float the_cost_of_the_conversation = beeline_banother_operator * talk_time;

			cout << "The cost of the call: " << the_cost_of_the_conversation << endl;
		}
		return 0;
	}

	else if (selected_character == 2) {
		cout << "Choose which operator you are calling to:" << endl;
		cout << "1: beeline" << endl;
		cout << "2: megafon" << endl;
		cout << "3: mts " << endl;
		cin >> selected_operator;

		if (selected_operator == 2) {
			float the_cost_of_the_conversation = megafon_megafon * talk_time;
			cout << "The cost of the call:" << the_cost_of_the_conversation << endl;
		}
		else {
			float the_cost_of_the_conversation = megafon_banother_operator * talk_time;
			cout << "The cost of the call:" << the_cost_of_the_conversation << endl;
		}
		return 0;
	}
	else if (selected_character == 3) {
		cout << "Choose which operator you are calling to:" << endl;
		cout << "1: beeline" << endl;
		cout << "2: megafon" << endl;
		cout << "3: mts " << endl;
		cin >> selected_operator;

		if (selected_operator == 3) {
			float the_cost_of_the_conversation = mts_mts * talk_time;
			cout << "The cost of the call:" << the_cost_of_the_conversation << endl;
		}
		else {
			float the_cost_of_the_conversation = mts_banother_operator * talk_time;
			cout << "The cost of the call:" << the_cost_of_the_conversation << endl;
		}
		return 0;
	}
}
