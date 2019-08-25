#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main05b() {
	string strSum, str;

	while (cin >> str)
		strSum += (strSum.empty() ? "" : " ") + str;

	cout << "The input strings is " + strSum << endl;
	system("pause");
	return 0;
}