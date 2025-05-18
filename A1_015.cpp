#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;
	string surname;
	int age;

	cin >> name;
	cin >> surname;
	cin >> age;

	string agestr = to_string(age);
	string result;

	if (name.length() > 5 && surname.length() > 5 )
	{
		result = name.substr(0, 2) + surname.substr(surname.length() - 1,1) + agestr.substr(agestr.length() - 1, 1);
		cout << result << endl;
	}
	else
	{
		result = name.substr(0, 1) + agestr + surname.substr(surname.length() - 1, 1);
		cout << result << endl;
	}


}