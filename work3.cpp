#include <iostream>
using namespace std;

int main() {
	int start, end;
	int sum = 0;

	cout << "Enter the start of range:";
	cin >> start;
		
	cout << "Enter end of range:";
	cin >> end;

	for(int i = start; i <= end; i++) {
		if (i % 2 == 0) {
			
			sum += i;
		}
	}
	cout << "The sum of all even numbers in a given range:" << sum << endl;
	return 0;
}