#include<iostream>
#include<vector>

using std::cin;
using std::vector;

int main25() {
	vector<unsigned> scores(11, 0);
	unsigned grade;

	while (cin >> grade) {
		if (grade <= 100)
			++*(scores.begin() + grade / 10);
	}

	return 0;
}