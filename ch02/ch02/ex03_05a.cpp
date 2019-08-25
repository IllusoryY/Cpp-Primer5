#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main05a() {
	string strSum, str;

	while (cin >> str)
		strSum += str;

	cout << "The concatenated input strings is" + strSum << endl;

	return 0;
}