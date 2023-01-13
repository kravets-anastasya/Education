/*По заданной длине окружности найти площадь круга
по формуле S = pi*R2, радиус вычислить из формулы длины
окружности: L=2*pi *R.*/

#include <iostream>

using namespace std;

int main(){
	float S = 0;
	float pi = 3.14;
	float R = 0;
	float L = 0;

	cout << "pi = " << pi << endl;
	cout << "Circumference_length = ";
	cin >> L;

	R = L / (2 * pi);
	//L = 2 * pi * R;
	cout << "Radius = " << R << endl;

	S = pi * (R*R);
	cout << "Area_of_the_circle = " << S << endl;

	return 0;
}
