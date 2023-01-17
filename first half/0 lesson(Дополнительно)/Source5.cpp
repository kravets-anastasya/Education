#include <iostream>
#include <stdlib.h>
#include <time.h>


#define Summ(first, second) first + second

using namespace std;

//inline - сразу реализует ее встовл€€ в функцию майн дл€ себ€.
int main() {

	int arr[10]{};
	int arr2[15]{};

	srand(time(nullptr));

	randomize_array(arr, 10, 50);
	randomize_array(arr2, 15, 20);

	print_array(arr, 10);
	print_array(arr2, 15);

	print_line(20, '!');
	print_line(20);
	print_line();

	int c = Summ(5+1, 6*2 / 2);

	cout << c << endl;

	return 0;
}


