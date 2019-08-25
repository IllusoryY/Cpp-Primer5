#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main06() {
	string str("this is streaming");

	for (auto &s : str) s = 'X';
	cout << str << endl;

	system("pause");
	return 0;
}