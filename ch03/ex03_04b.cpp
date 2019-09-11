#include<string>
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main04b() {
	for (string str1, str2; cin >> str1 >> str2; ) {
		if (str1.size() == str2.size())
			cout << "Your enter strings size are equal" << endl;
		else
			cout << "The longer string is " + ((str1.size() > str2.size()) ? str1 : str2) << endl;
	}

	return 0;
}