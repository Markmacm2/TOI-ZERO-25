#include <iostream>
using namespace std;

int main() {

	int work, midterm, final;
	int minwork = 5;
	int minmidterm = 20;
	int minfinal = 25;


	cin >> work;
	cin >> midterm;
	cin >> final;

	if (work <= 10 && work >=0 && midterm <= 40 && midterm >=0 && final <= 50 && final >=0) {
		if (work >= minwork && midterm >= minmidterm && minfinal >= minfinal) {
		cout << "pass" << endl;
		}
		else {
		cout << "fail" << endl;
		}
	}
}