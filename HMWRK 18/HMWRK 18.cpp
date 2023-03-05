#include <iostream>
#include <ctime>
#include <cstdlib>



void sum(int num, int default_n = 1) {
	int arr[5]{};
	int sum = 0;
	if (num > 0 && num <= 5) {
		for (int i{}; i < num; i++) {
			std::cin >> arr[i];
			sum += arr[i];
		}
		std::cout << "Sum is = " << sum;
	}
	else
		if (num == 0)
			std::cout << default_n;
		else
			std::cout << "Error.\n";

	
}

// Немного фантазии (some fantasy if github will return krokozyabras) 
inline double ar_mean_in(int num, int num1, int num2 = 0) {
	return (num + num1 + num2) / 3;
}

void max(int a, int b, int c) {
	std::cout << "Тип данных INT:\n";
	int max = a;
	if (a < b && b > c)
		max = b;
	else
		if (c > max)
			max = c;
	std::cout << "Max = " << max << "\n";

void max(short a, short b, short c) {
	std::cout << "Тип данных SHORT:\n";
	short max = a;
	if (a < b && b > c)
		max = b;
	else
		if (c > max)
			max = c;
	std::cout << "Max = " << max << "\n";
}

void max(double a, double b, double c) {
	std::cout << "Тип данных DOUBLE:\n";
	double max = a;
	if (a < b && b > c)
		max = b;
	else
		if (c > max)
			max = c;
	std::cout << "Max = " << max << "\n";
}

template <typename T>
T f_element(T arr[], int length) {
	int f_element = 0;
	int counter;
	for (int i = 0; i < length; i++) {
		counter = 0;
		for (int j = 1; j <= arr[i]; j++)
			if (arr[i] % j == 0)
				counter++;
		if (counter == 2) {
			f_element = arr[i];
			break;
		}
	}
	return f_element;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n,a,b,c,d,e,f;
	
	// Задача 1.
	
	std::cout << "Сколько чисел сложить? min = 1, max = 5 -> ";
	std::cin >> n;
	sum(n);
		
	// Задача 2.

	std::cout << "\nВведите три числа -> ";
	std::cin >> a >> b >> c;
	std::cout << "Среднее арифметическое = " << ar_mean_in(a, b, c) << "\n";
	
	// Задача 3.

	std::cout << "\nЗадача 3.\n";
	max(1, 2, 3); // не смог заставить работать
	max(14, 0, 27);
	max(3.5, 0.046, 123.12);
	
	// Задача 4.

	srand(time(NULL));
	const int size{5};
	int arr[size]{};
	for (int i{}; i < size; i++)
		arr[i] = rand() % 11;
	std::cout << "\nЗадача 4.\nМассив: [";
	for (int i{}; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	
	std::cout << f_element(arr, size);


	
	return 0;
}