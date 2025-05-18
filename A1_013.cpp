#include <iostream>
using namespace std;

int main() {

	char word = 'H';
	int digit = 4567;

	cin >> word;
	cin >> digit;

	if (word == 'H' && digit == 4567) {
		cout << "safe unlocked" << endl;
	}
	else if (word == 'H') {
		cout << "safe locked - change digit" << endl;
	}
	else if (digit == 4567) {
		cout << "safe locked - change char" << endl;
	}
	else {
		cout << "safe locked" << endl;
	}

}