#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Enter the number:";
	cin >> number;

	int square = number * number;
	int cube = number * number * number;

	cout << "square number:" << square
	<< endl;
	cout << "cube number:" << cube
	<< endl;

	return 0;
}