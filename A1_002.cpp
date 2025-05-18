#include <iostream>
using namespace std;

int main() {

	int money;
	int result10 = 0;
	int result5 = 0;
	int result2 = 0;
	int result1 = 0;
	cin >> money;

	if (money >= 10) {
		result10 = money / 10;
		money = money % 10;
	}if (money >= 5) {
		result5 = money / 5;
		money = money % 5;
	}if (money >= 2) {
		result2 = money / 2;
		money = money % 2;
	}if (money >= 1) {
		result1 = money / 1;
		money = money % 1;
	}


	cout << "10 = " << result10 << endl;
	cout << "5 = " << result5 << endl;
	cout << "2 = " << result2 << endl;
	cout << "1 = " << result1 << endl;

}