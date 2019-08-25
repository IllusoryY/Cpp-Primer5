#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main08() {
	string str2("this is streaming");

	decltype(str2.size()) index = 0;
	while (index < str2.size()) {
		str2[index++] = 'X';
	}
	cout << str2 << endl;


	string str3("this is streaming");
	for (index = 0; index < str3.size(); str3[index++] = 'Z');
	cout << str3 << endl;

	system("pause");
	return 0;
}