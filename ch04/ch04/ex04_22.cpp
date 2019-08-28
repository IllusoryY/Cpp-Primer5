#include<vector>
#include<string>
#include<iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int main22() {
	string finalgrade;

	//use conditional operator
	for (int grade; cin >> grade; cout << finalgrade << endl)
		finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade > 75) ? "pass" : "low pass";

	cout << "==============================" << endl;
	cin.clear();
	//use if
	int grade;
	while (cin >> grade) {
		if (grade > 90) {
			cout << "high pass" << endl;
		}
		else if (grade > 75) {
			cout << "pass" << endl;
		}
		else if (grade > 60) {
			cout << "low pass" << endl;
		}
		else {
			cout << "fail" << endl;
		}
	}

	

	system("pause");
	return 0;
}