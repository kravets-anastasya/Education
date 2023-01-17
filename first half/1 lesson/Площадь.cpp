#include <iostream>

using namespace std;

int main() {
	/*По заданной длине окружности найти площадь круга по формуле 
	S=pi*R2, радиус вычислить из формулы длины окружности: L=2*pi*R
	Примечание: pi = 3.14*/


	float pi = 3.14;
	float L = 0;
	
	cout << "Enter the length of the circle: " << endl;
	cin >> L;

	float R = L / (2 * pi);
	cout << "circle radius: " << R << endl;

	float S = pi * (R * R);
	cout << "area of the circle: " << S << endl;

	return 0;
}
