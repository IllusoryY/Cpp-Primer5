#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main05() {
	const vector<string> svec = { "F","D","C","B","A","A++" };
	
	string lettergrade;

	int grade = 0;
	while (cin >> grade) {
		if (grade < 60) {
			lettergrade = svec[0];
		}
		else {
			lettergrade = svec[(grade - 50) / 10];
			if (grade != 100)
				lettergrade += (grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : "");
		}
		cout << lettergrade << endl;
	}
			
	system("pause");
	return 0;
}