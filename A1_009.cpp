#include <iostream>
using namespace std;

int main() {

	int midterm;
	int final;
	int sum;

	cin >> midterm;
	cin >> final;

	if (midterm >= 0 and final >= 0 && midterm <= 50 and final <= 50)
	{
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
	else {
		return 0;
	}




}