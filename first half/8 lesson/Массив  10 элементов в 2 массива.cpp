#include <iostream>
#include <time.h> 

using namespace std;

int main() {
	/*Написать программу, копирующую последовательно элементы
	одного массива размером 10 элементов в 2 массива размером
	5 элементов каждый.*/
	
	cout << "Home task #9.1.1" << endl;
	int const n = 10;
	int const m = 5;
	int const a = 10;
	int const b = 20;

	int result[n];
	int mass1[m];
	int mass2[m];

	srand(time(NULL));

	cout << "1st + 2nd = result" << endel;

	for (int i = 0; i < n; i++)
	{
		mass1[i] = a + rand() % (b - a);
		mass2[i] = a + rand() % (b - a);
		result[i] = mass1[i] + mass2[i];
		cout << mass1[i] << " + " << mass2[i];
		cout << " = " << result[i] << endel;
	}

	return 0;
}
