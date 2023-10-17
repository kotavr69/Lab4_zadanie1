/*Вариант 11
Дан набор ненулевых целых чисел;
признак его завершения — число 0.
Вывести количество отрицательных нечетных чисел в наборе.
*/
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int number;
	int k = 0;
	while (true) {
		cin >> number;
		if (number == 0) {
			break;
		}
		if (((number % 2) != 0) && (number < 0)){
			k++;
		}
	}
	cout << "Количество отрицательных нечетных чисел: " << k << endl;
}
