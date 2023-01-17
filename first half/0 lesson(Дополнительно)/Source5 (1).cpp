#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void randomize_array(int arr[], const size_t longth, const size_t max_range = 10);
void print_array(int arr[], const size_t longth);
void print_line(const size_t longth = 10, const char symbol = '='); 

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
	return 0;
}

void randomize_array(int arr[], const size_t longth, const size_t max_range) {
	for (size_t i = 0; i < longth; i++) {
		arr[i] = rand() % max_range;
	}
}

void print_array(int arr[], const size_t longth) {
	for (size_t i = 0; i < longth; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}

void print_line(const size_t longth, const char symbol) {
	for (size_t i = 0; i < longth; i++) {
		cout << symbol;
	}
	cout << endl;
}

