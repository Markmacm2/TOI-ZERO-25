#include <iostream>
using namespace std;

int main() {

	int age;
	char state;

	cin >> age;
	cin >> state;

	if (age < 18 || state == 's' || state == 'S')
	{
		cout << "20" << endl;
	}
	else {
		cout << "50" << endl;
	}


}