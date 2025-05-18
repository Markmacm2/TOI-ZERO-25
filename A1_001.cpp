#include <iostream>
#include <string>
using namespace std;


int main() {

	string Name;
	string Surname;
	string Abbreviation;


	cin >> Name;
	cin >> Surname;

	cout << "Hello " << Name << " " << Surname << endl;
	Abbreviation = Name.substr(0, 2) + Surname.substr(0, 2);
	cout << Abbreviation;

}