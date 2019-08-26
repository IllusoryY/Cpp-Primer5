#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::vector;
using std::string;


int main15() {
	vector<string> svec;

	for (string str; cin >> str; svec.push_back(str));

	return 0;
}