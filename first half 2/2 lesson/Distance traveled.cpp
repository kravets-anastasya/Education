/* Вычислить пройденное расстояние при прямолинейном
равноускоренном движении по формуле S = v * t + (a * t2) / 2,
где v — скорость, t — время, а — ускорение.*/

#include <iostream>

using namespace std;

int main(){

	setlocale(LC_ALL, "Russian");
	int v = 0;
	int t = 0;
	int a = 0;
	int S = 0;

	cout << "Введите скорость: ";
	cin >> v;
	cout << "Введите время: ";
	cin >> t;
	cout << "Введите ускорение: ";
	cin >> a;

	S = v * t + (a * (t*t)) / 2;
	cout << "Пройденное расстояние: " << S << endl;

	return 0;
}
