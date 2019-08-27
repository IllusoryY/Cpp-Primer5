#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::endl;

int main39() {
	string s1("rose");
	string s2("rose");

	if (s1 == s2)
		cout << "The two strings is equal" << endl;
	else if(s1 > s2)
		cout << s1 << " > " << s2 << endl;
	else
		cout << s1 << " < " << s2 << endl;

	cout << "=====================" << endl;

	//char ca[] = {'a','b','c','\0'};
	//char cb[] = { 'a','b','c','\0' };

	const char* ca = "xiaopanzi";
	const char* cb = "dapanzo";
	auto result = strcmp(ca, cb);

	if (result == 0)
		cout << "The two strings is equal" << endl;
	else if (result > 0)
		cout << ca << " > " << cb << endl;
	else
		cout << ca << " < " << cb << endl;

	system("pause");
	return 0;
}