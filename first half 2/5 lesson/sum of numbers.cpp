//������ ��������� ���������
//������������ � ���������� ������ �����. ��������� �� ����� � ������� �� �����, ��� ������ ������������ ������ ����.
#include <iostream>
using namespace std;
int main() {
    int namber{1};
    int summ{};
    while (namber != 0) {
        cout << "Enter some number: ";
        cin >> namber;
        summ = summ +namber;
    }
    cout << "Summ: " << summ << endl;
 return 0;
}