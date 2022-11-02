#include <iostream>
using namespace std;
int main() {
 //дан массив из пяти элементов ввести с кл данные вывести в обратном порядке
	/*const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//дан массив из 15 элементов . заполнить его случайными числами из диапазона 0-20. подсчитать кол-во чётных чисел в массиве
	/*const int n = 15;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			kol_vo++;
		}
	}
	cout << endl;*/
	//1 дан массив из 15 элементов. заполнить его случайными числами из диапазона 0-20. подсчитать кол-во чисел в массиве, которые не делятся
	//на 5
	/*const int n = 15;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 != 0) {
			kol_vo++;
		}
	}
	cout << endl; */
	//2 дан массив из 20 элементов. заполнить его случайными числами из диапазона 0-30. подсчитать сумму тех чисел, которые делятся на 3 и 
	//на 5
	/*const int n = 20;
	int sum = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
			sum += arr[i];
		}
	}
	cout << sum << endl;*/
	//3 дан массив из 17 элементов. заполнить его случайными числами из диапазона 0-45. подсчитать произведение тех чисел, которые делятся
	//на 2 или на 3
	const int n = 17;
	long long p = 1;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 46;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 2 == 0) {
			p *= arr[i];
		}
	}
	cout << p << endl;
	}