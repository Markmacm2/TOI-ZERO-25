#include <iostream>
using namespace std;


int main() {

	int midterm;
	int final;
	int sum;

	cin >> midterm;
	cin >> final;

	sum = midterm + final;

	if (sum < 50)
	{
		cout << sum << endl;
		cout << "fail" << endl;
	}
	else {
		cout << sum << endl;
		cout << "pass" << endl;
	}
	


}