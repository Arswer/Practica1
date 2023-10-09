#include <iostream>
using namespace std;

int main() {
	double num1, num2;

	cout << "Enter two numbers:";
	cin >> num1 >> num2;

	double average = (num1 + num2) / 2;

	cout << "Arithmetic mean of two numbers:" << average << endl;

	return 0;
}