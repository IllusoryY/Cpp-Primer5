#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main16() {
	vector<int> v1;
	cout << "{\n \"v1\":{\"size\":\"" << v1.size() << "\",\"value\":[";
	for (auto i : v1)
		cout << i << ",";
	if ((!v1.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<int> v2(10);
	cout << "\"v2\":{\"size\":\"" << v2.size() << "\",\"value\":[";
	for (auto i : v2)
		cout << i << ",";
	if ((!v2.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<int> v3(10,42);
	cout << "\"v3\":{\"size\":\"" << v3.size() << "\",\"value\":[";
	for (auto i : v3)
		cout << i << ",";
	if ((!v3.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<int> v4{ 10 };
	cout << "\"v4\":{\"size\":\"" << v4.size() << "\",\"value\":[";
	for (auto i : v4)
		cout << i << ",";
	if ((!v4.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<int> v5{ 10,42 };
	cout << "\"v5\":{\"size\":\"" << v5.size() << "\",\"value\":[";
	for (auto i : v5)
		cout << i << ",";
	if ((!v5.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<string> v6{ 10 };
	cout << "\"v6\":{\"size\":\"" << v2.size() << "\",\"value\":[";
	for (auto i : v6) {
		if (i.empty()) cout << "(null)" << ",";
		else cout << i << ",";
	}
	if ((!v6.empty())) cout << "\b";
	cout << "]}" << endl;

	vector<string> v7{ 10,"hi" };
	cout << "\"v7\":{\"size\":\"" << v7.size() << "\",\"value\":[";
	for (auto i : v7) {
		if (i.empty()) cout << "(null)" << ",";
		else cout << i << ",";
	}
	if ((!v7.empty())) cout << "\b";
	cout << "]}\n}" << endl;

	/*******************************
	This exercise is copy form wangyue's git,which adress is:
	https://github.com/Mooophy/Cpp-Primer/blob/master/ch03/ex3_16.cpp
	**********************************/

	system("pause");
	return 0;
}