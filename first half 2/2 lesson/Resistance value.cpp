//Заданы три сопротивлении R1, R2, R3. Вычислить значение сопротивления R0 по формуле: 1/R0 = 1/R1+1/R2+1/R3.
#include <iostream>

using namespace std;

int main() {
	float R1 = 0;
	float R2 = 0;
	float R3 = 0;
	float R0 = 0;

	cout << "R1 = ";
	cin >> R1;
	cout << "R2 = ";
	cin >> R2;
	cout << "R3 = ";
	cin >> R3;

	R0 = 1 / R1 + 1 / R2 + 1 / R3;
	cout << "R0 = " << 1/R0 << endl; 

	return 0;
}
