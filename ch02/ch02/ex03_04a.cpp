#include<string>
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main04a() {
	for (string str1, str2; cin >> str1 >> str2; ) {
		if (str1 == str2)
			cout << "Your enter strings are equal" << endl;
		else
			cout << "The larger string is " + ((str1 > str2) ? str1 : str2) << endl;
	}
		
	return 0;
}