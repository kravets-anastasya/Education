#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(nullptr));

	const int line{2};
	const int column{4};
	int the_matrix[line][column]{1, 2, 3, 4, 5, 6, 7, 8};
	int how_much{};
	
	cout << "Enter shift value" << endl;

	cin >> how_much;

	for (size_t k = 0; k < how_much; k++){
		int last_column[line]{};

		for (size_t j = 0; j < line; j++){
			last_column[j] = the_matrix[j][column - 1];
		}
		for (size_t i = 0; i < line; i++) {
			for (size_t l = column - 1; l > 0; l--){
				the_matrix[i][l] = the_matrix[i][l - 1];
			}
		}
		for (size_t j = 0; j < line; j++){
			the_matrix[j][0] = last_column[j];
		}

	}
	for (size_t i = 0; i < line; i++) {
		for (size_t j = 0; j < column; j++) {
			the_matrix[i][j] = the_matrix[i][j - 1];
		}
	}
	

	return 0;
}