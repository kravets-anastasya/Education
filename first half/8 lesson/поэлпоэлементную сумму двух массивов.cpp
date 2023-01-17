#include <iostream>
#include <time.h> 

using namespace std;

int main() {
	/*Напишите программу, которая выполняет поэлементную
сумму двух массивов и результат заносит в третий массив. */
    const int size = 10;
    int arr1[size];
    int arr2[size];
    int arrs[size];
    cout << "Enter the random numbers to fill first array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }
    cout << endl << "Enter the random numbers to fill second array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }
    cout << endl << "The third array with the sum of two arrays: " << endl;
    for (int i = 0; i < size; i++)
    {
        arrs[i] = arr1[i] + arr2[i];
       // cout << "arr3[" << i << "] = ";
        cout << arr1[i]<< " + " << arr2[i] << " = " << arrs[i] << endl;
    }
    cout << endl << endl << "Potapenko A.V. " << endl;

	return 0;
}
