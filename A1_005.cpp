#include <iostream>
#include <string>
using namespace std;


/*
string getseason(int day,int month) {

	if (month >= 1 && month <= 3) {
		if (day >= 21 && month % 3 == 0)
		{
			return "spring";
		}
		else {
			return "winter";
		}
	}
	else if (month >= 4 && month <= 6) {
		if (day >= 21 && month % 3 == 0)
		{
			return "summer";
		}
		else {
			return "spring";
		}
	}
	else if (month >= 7 && month <= 9) {
		if (day >= 21 && month % 3 == 0)
		{
			return "fall";
		}
		else {
			return "summer";
		}
	}
	else if (month >= 10 && month <= 12) {
		if (day >= 21 && month % 3 == 0)
		{
			return "winter";
		}
		else {
			return "fall";
		}
	}


}
*/

int main() {


	int day;
	int month;

	cin >> day;
	cin >> month;

	if (month >= 1 && month <= 3) {
		if (day >= 21 && month % 3 == 0)
		{
			cout << "spring" << endl;
		}
		else {
			cout << "winter" << endl;
		}
	}
	else if (month >= 4 && month <= 6) {
		if (day >= 21 && month % 3 == 0)
		{
			cout << "summer" << endl;
		}
		else {
			cout << "spring" << endl;
		}
	}
	else if (month >= 7 && month <= 9) {
		if (day >= 21 && month % 3 == 0)
		{
			cout << "fall" << endl;
		}
		else {
			cout << "summer" << endl;
		}
	}
	else if (month >= 10 && month <= 12) {
		if (day >= 21 && month % 3 == 0)
		{
			cout << "winter" << endl;
		}
		else {
			cout << "fall" << endl;
		}
	}
	else {
		return 0;
	}



}