#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	int num3;


	cin >> num1;
	cin >> num2;
	cin >> num3;

	int max = num1;

	if (max > num2) {
		max = num2;
	}if (max > num3)
	{
		max = num3;
	}

	cout << max << endl;

}