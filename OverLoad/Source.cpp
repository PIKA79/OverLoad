#include <iostream>
using namespace std;

inline int sum(int num1, int num2) {
	return num1 + num2;
}

int max_el(int num1, int num2) {
	cout << "INT\n";
	if (num1 > num2)
		return num1;
	return num2;
}

double max_el(double num1, double num2) {
	cout << "DOUBLE\n";
	if (num1 > num2)
		return num1;
	return num2;
}

int max_el(int num1, int num2, int num3) {
	cout << "THREE INT\n";
	int max = num1;
	if (num2 > max) max = num2;
	if (num3 > max) max = num3;
	return max;
}

template <typename T>
double mean(T num1, T num2) {
	return (num1 + num2) / 2.0;

}
int main() {
	setlocale(LC_ALL, "Sussian");
	int n, m;

	//Шаблонная функция
	
	cout << mean(4, 7) << "\n";
	cout << mean(2.2, 2.4) << "\n";


		/*cout << "Введите два числа: ";
		cin >> n >> m;
	    cout << n << "+" << m << "=" << sum(n, m);*/

	//Перегруженные функции
	/*cout << max_el(10, 5) << "\n";
	cout << max_el(1.2, 1.9) << "\n";
	cout << max_el(5, 7, 6) << "\n";*/

	//Тернаный оператор
	int a = 10, b = 7;
	//int max = a > b ? a : b;
	//int max;
	//if (a > b)
		//max = a;
	//else
		//max = b;
	//cout << "Максимум = " << max << "\n";


	return 0;
}