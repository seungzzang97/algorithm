#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

		if (num1 == num2 && num1 == num3) {
			int result = 10000 + num1 * 1000;
			cout << result;
		}
		else if (num1 == num2 || num1 == num3) {
			int result = 1000 + num1 * 100;
			cout << result;
		}
		else if (num2 == num3) {
			int result = 1000 + num2 * 100;
			cout << result;
		}
		else {
			int result = max({ num1, num2, num3 }) * 100;
			cout << result;
		}
	
}