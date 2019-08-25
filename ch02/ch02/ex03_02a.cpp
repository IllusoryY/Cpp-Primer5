#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main02a() {
	for (string strLine; std::getline(cin , strLine); cout << strLine << endl);

	return 0;
}

