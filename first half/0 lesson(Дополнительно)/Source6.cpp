#include <iostream>
#include <stdlib.h>
#include <time.h>


#define Summ(first, second) first + second
#define MULT(first, second) ((first) * (second))
#define	HELLO cout << "Hello";\
	cout << endl << "!!!";

#define	PRINT_ARR(A, L) \
for (size_t i = 0; i < L; i++){\
	cout << A[i] << '\t';\
}\
cout << endl;
	
using namespace std;

//inline - сразу реализует ее встовл€€ в функцию майн дл€ себ€.
int main() {
	int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int c = Summ(5+1, 6 * 5 / 2);
	int d = MULT((5 + 1), (6 * 5 / 2));
	cout << c << endl;
	cout << d << endl;
	PRINT_ARR(arr, 10);
	HELLO;

	return 0;
}


