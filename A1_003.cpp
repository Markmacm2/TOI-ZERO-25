#include <iostream>
using namespace std;

int main() {

	int num1,num2,num3,MAX;

	cin >> num1;
	cin >> num2;
	cin >> num3;

	MAX = num1;

	if (MAX < num2)
	{
		MAX = num2;
	}
	if (MAX < num3) {

		MAX = num3;

	}
	cout << MAX << endl;
	return 0;
}