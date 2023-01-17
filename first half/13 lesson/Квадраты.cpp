#include <iostream>

using namespace std;

int main() {

	const size_t length{20};
	const size_t half_a_square{ length / 2 };
	size_t counting{ length };
	size_t namber{};

	cout << "Enter the number of the drawn square 1-10: ";
	cin >> namber;

	if (namber > 10 || namber <= 0) {
		system("color 74");

		cout << endl << "You entered an incorrect number for the drawn square" << endl;
		return 1;
	}

	system("color 70");
	cout << endl << endl;

	if (namber == 1) {
		//1 
		for (size_t i = 0; i <= length; i++) {
			for (size_t j = 0; j <= length; j++) {
				if (i <= j) {
					cout << '0' << ' ';
				}
				if (j < i) {
					cout << '_' << ' ';
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 2) {
		//2
		for (size_t i = 0; i <= length; i++) {
			for (size_t j = 0; j <= length; j++) {
				if (i >= j) {
					cout << '0' << ' ';
				}
				if (j >= i) {
					cout << '_' << ' ';
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 3) {
		//3
		for (size_t i = 0; i < length; i++) {
			for (size_t j = 0; j < length; j++) {
				if (i <= j && i < half_a_square && j < counting) {
					cout << '0' << ' ';
				}
				else
					cout << '_' << ' ';
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 4) {
		//4
		for (size_t i = 0; i < length; i++) {
			for (size_t j = 0; j < length; j++) {
				if (i >= j && i >= half_a_square && j >= counting-1) {
					cout << '0' << ' ';
				}
				else
					cout << '_' << ' ';
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 5) {
		//5
		for (size_t i = 0; i < length; i++) {
			for (size_t j = 0; j < length; j++) {
				if (i <= j && i <= half_a_square && j < counting) {
					cout << '0' << ' ';
				}
				else if (i > j && i >= half_a_square && j >= counting) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 6) {
		//6
		for (size_t i = 1; i < length; i++) {
			for (size_t j = 1; j < length; j++) {
				if (j <= i && j <= half_a_square && j < counting) {
					cout << '0' << ' ';
				}
				else if (j >= i && j >= half_a_square && j >= counting) {
					cout << '0' << ' ';
				}
				else if (j >= i && j >= half_a_square && j == counting - 1) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 7) {
		//7
		for (size_t i = 0; i < length; i++) {
			for (size_t j = 0; j < length; j++) {
				if (j <= i && j <= half_a_square && j <= counting) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 8) {
		//8
		for (size_t i = 0; i <= length; i++) {
			for (size_t j = 0; j <= length; j++) {
				if (j >= i && j >= half_a_square && j >= counting) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 9) {
		//9
		for (size_t i = 0; i <= length; i++) {
			for (size_t j = 0; j <= length; j++) {
				if (j <= counting) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	if (namber == 10) {
		//10
		for (size_t i = 0; i <= length; i++) {
			for (size_t j = 0; j <= length; j++) {
				if (j >= counting) {
					cout << '0' << ' ';
				}
				else {
					cout << '_' << ' ';
				}
			}
			counting--;
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}