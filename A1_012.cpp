#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int num1; /*Number inverted*/
	cin >> num1;
	string convert = to_string(num1);
	string invert = convert.substr(1,1) + convert.substr(0,1);
	int num2 = stoi(invert);

	string op;
	cin >> op;
	int result;


	if (num1 >= 10 && num1 <=99 && num2 >=10 && num2 <=99)
	{
		if (op == "+")
		{
			result = num1 + num2;
			cout << convert << " + " << invert << " = " << result << endl;
		}
		else if (op == "*") {
			result = num1 * num2;
			cout << convert << " * " << invert << " = " << result << endl;
		}
	}
	else {
		return 0;
	}

}