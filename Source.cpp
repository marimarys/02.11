#include <iostream>
using namespace std;
int main() {
 //��� ������ �� ���� ��������� ������ � �� ������ ������� � �������� �������
	/*const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//��� ������ �� 15 ��������� . ��������� ��� ���������� ������� �� ��������� 0-20. ���������� ���-�� ������ ����� � �������
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
	//1 ��� ������ �� 15 ���������. ��������� ��� ���������� ������� �� ��������� 0-20. ���������� ���-�� ����� � �������, ������� �� �������
	//�� 5
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
	//2 ��� ������ �� 20 ���������. ��������� ��� ���������� ������� �� ��������� 0-30. ���������� ����� ��� �����, ������� ������� �� 3 � 
	//�� 5
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
	//3 ��� ������ �� 17 ���������. ��������� ��� ���������� ������� �� ��������� 0-45. ���������� ������������ ��� �����, ������� �������
	//�� 2 ��� �� 3
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